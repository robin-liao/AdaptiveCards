// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "Column.h"

namespace AdaptiveCards::Rendering::Uwp {
class AdaptiveColumnRenderer
    : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>, ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveElementRenderer>
{
    AdaptiveRuntime(AdaptiveColumnRenderer);

public:
    HRESULT RuntimeClassInitialize() noexcept;

    IFACEMETHODIMP Render(
        _In_ ABI::AdaptiveCards::ObjectModel::Uwp::IAdaptiveCardElement* cardElement,
        _In_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveRenderContext* renderContext,
        _In_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveRenderArgs* renderArgs,
        _COM_Outptr_ ABI::Windows::UI::Xaml::IUIElement** result) noexcept override;
};

ActivatableClass(AdaptiveColumnRenderer);
} // namespace AdaptiveCards::Rendering::Uwp
