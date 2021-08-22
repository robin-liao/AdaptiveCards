// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveImage.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveCards::ObjectModel::WinUI3;
using namespace ABI::Windows::Foundation;

namespace AdaptiveCards::ObjectModel::WinUI3
{
    AdaptiveImage::AdaptiveImage() {}

    HRESULT AdaptiveImage::RuntimeClassInitialize() noexcept
    try
    {
        std::shared_ptr<AdaptiveCards::Image> image = std::make_shared<AdaptiveCards::Image>();
        return RuntimeClassInitialize(image);
    }
    CATCH_RETURN();

    HRESULT AdaptiveImage::RuntimeClassInitialize(const std::shared_ptr<AdaptiveCards::Image>& sharedImage)
    try
    {
        if (sharedImage == nullptr)
        {
            return E_INVALIDARG;
        }

        RETURN_IF_FAILED(UTF8ToHString(sharedImage->GetUrl(), m_url.GetAddressOf()));

        RETURN_IF_FAILED(UTF8ToHString(sharedImage->GetBackgroundColor(), m_backgroundColor.GetAddressOf()));

        m_imageStyle = static_cast<ABI::AdaptiveCards::ObjectModel::WinUI3::ImageStyle>(sharedImage->GetImageStyle());
        m_imageSize = static_cast<ABI::AdaptiveCards::ObjectModel::WinUI3::ImageSize>(sharedImage->GetImageSize());
        m_pixelWidth = sharedImage->GetPixelWidth();
        m_pixelHeight = sharedImage->GetPixelHeight();

        if (sharedImage->GetHorizontalAlignment().has_value())
        {
            m_horizontalAlignment =
                winrt::box_value(static_cast<winrt::AdaptiveCards::ObjectModel::WinUI3::HAlignment>(
                                     sharedImage->GetHorizontalAlignment().value()))
                    .as<ABI::Windows::Foundation::IReference<ABI::AdaptiveCards::ObjectModel::WinUI3::HAlignment>>()
                    .get();
        }

        RETURN_IF_FAILED(UTF8ToHString(sharedImage->GetAltText(), m_altText.GetAddressOf()));
        m_selectAction = GenerateActionProjection(sharedImage->GetSelectAction());

        InitializeBaseElement(std::static_pointer_cast<BaseCardElement>(sharedImage));
        return S_OK;
    }
    CATCH_RETURN();

    HRESULT AdaptiveImage::get_Url(_Outptr_ HSTRING* url) { return m_url.CopyTo(url); }

    HRESULT AdaptiveImage::put_Url(_In_ HSTRING url) { return m_url.Set(url); }

    HRESULT AdaptiveImage::get_BackgroundColor(_Outptr_ HSTRING* backgroundColor)
    {
        return m_backgroundColor.CopyTo(backgroundColor);
    }

    HRESULT AdaptiveImage::put_BackgroundColor(_In_ HSTRING backgroundColor)
    {
        return m_backgroundColor.Set(backgroundColor);
    }

    HRESULT AdaptiveImage::get_Style(_Out_ ABI::AdaptiveCards::ObjectModel::WinUI3::ImageStyle* imageStyle)
    {
        *imageStyle = m_imageStyle;
        return S_OK;
    }

    HRESULT AdaptiveImage::put_Style(ABI::AdaptiveCards::ObjectModel::WinUI3::ImageStyle imageStyle)
    {
        m_imageStyle = imageStyle;
        return S_OK;
    }

    HRESULT AdaptiveImage::get_Size(_Out_ ABI::AdaptiveCards::ObjectModel::WinUI3::ImageSize* imageSize)
    {
        *imageSize = m_imageSize;
        return S_OK;
    }

    HRESULT AdaptiveImage::put_Size(ABI::AdaptiveCards::ObjectModel::WinUI3::ImageSize imageSize)
    {
        m_imageSize = imageSize;
        return S_OK;
    }

    HRESULT AdaptiveImage::get_PixelWidth(_Out_ UINT32* pixelWidth)
    {
        *pixelWidth = m_pixelWidth;
        return S_OK;
    }

    HRESULT AdaptiveImage::put_PixelWidth(UINT32 pixelWidth)
    {
        m_pixelWidth = pixelWidth;
        return S_OK;
    }

    HRESULT AdaptiveImage::get_PixelHeight(_Out_ UINT32* pixelHeight)
    {
        *pixelHeight = m_pixelHeight;
        return S_OK;
    }

    HRESULT AdaptiveImage::put_PixelHeight(UINT32 pixelHeight)
    {
        m_pixelHeight = pixelHeight;
        return S_OK;
    }

    HRESULT AdaptiveImage::get_AltText(_Outptr_ HSTRING* text) { return m_altText.CopyTo(text); }

    HRESULT AdaptiveImage::put_AltText(_In_ HSTRING text) { return m_altText.Set(text); }

    HRESULT AdaptiveImage::get_HorizontalAlignment(
        _COM_Outptr_ ABI::Windows::Foundation::IReference<ABI::AdaptiveCards::ObjectModel::WinUI3::HAlignment>** horizontalAlignment)
    {
        return m_horizontalAlignment.CopyTo(horizontalAlignment);
    }

    HRESULT AdaptiveImage::put_HorizontalAlignment(
        _In_ ABI::Windows::Foundation::IReference<ABI::AdaptiveCards::ObjectModel::WinUI3::HAlignment>* horizontalAlignment)
    {
        m_horizontalAlignment = horizontalAlignment;
        return S_OK;
    }

    HRESULT AdaptiveImage::get_ElementType(_Out_ ElementType* elementType)
    {
        *elementType = ElementType::Image;
        return S_OK;
    }

    HRESULT AdaptiveImage::get_SelectAction(_COM_Outptr_ IAdaptiveActionElement** action)
    {
        copy_to_abi(m_selectAction, action);
        return S_OK;
    }

    HRESULT AdaptiveImage::put_SelectAction(_In_ IAdaptiveActionElement* action)
    {
        winrt::copy_from_abi(m_selectAction, action);
        return S_OK;
    }

    std::shared_ptr<::AdaptiveCards::BaseCardElement> AdaptiveImage::GetSharedModel()
    {
        std::shared_ptr<AdaptiveCards::Image> image = std::make_shared<AdaptiveCards::Image>();

        THROW_IF_FAILED(CopySharedElementProperties(*image));

        if (m_selectAction)
        {
            image->SetSelectAction(GenerateSharedAction(m_selectAction));
        }

        image->SetUrl(HStringToUTF8(m_url.Get()));
        image->SetBackgroundColor(HStringToUTF8(m_backgroundColor.Get()));

        if (m_altText != nullptr)
        {
            std::string out;
            THROW_IF_FAILED(HStringToUTF8(m_altText.Get(), out));
            image->SetAltText(out);
        }

        image->SetImageStyle(static_cast<AdaptiveCards::ImageStyle>(m_imageStyle));
        image->SetImageSize(static_cast<AdaptiveCards::ImageSize>(m_imageSize));
        image->SetPixelHeight(m_pixelHeight);
        image->SetPixelWidth(m_pixelWidth);

        if (m_horizontalAlignment != nullptr)
        {
            ABI::AdaptiveCards::ObjectModel::WinUI3::HAlignment horizontalAlignmentValue;
            THROW_IF_FAILED(m_horizontalAlignment->get_Value(&horizontalAlignmentValue));
            image->SetHorizontalAlignment(static_cast<AdaptiveCards::HorizontalAlignment>(horizontalAlignmentValue));
        }

        return image;
    }
}