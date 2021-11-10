// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveExecuteActionRenderer.h"
#include "ActionHelpers.h"

using namespace ABI::AdaptiveCards::Rendering::WinUI3;
using namespace ABI::AdaptiveCards::ObjectModel::WinUI3;
using namespace Microsoft::WRL;

namespace winrt::AdaptiveCards::Rendering::WinUI3::implementation
{
    /*HRESULT AdaptiveExecuteActionRenderer::RuntimeClassInitialize() noexcept
    try
    {
        return S_OK;
    }
    CATCH_RETURN();*/

    rtxaml::UIElement Render(rtom::IAdaptiveActionElement const& action,
                             rtrender::AdaptiveRenderContext const& renderContext,
                             rtrender::AdaptiveRenderArgs const& renderArgs)
    {
        try
        {
            /*RETURN_IF_FAILED(renderContext->LinkSubmitActionToCard(action, renderArgs));
            return ActionHelpers::BuildAction(action, renderContext, renderArgs, false, result);*/
            renderContext.LinkSubmitActionToCard(action, renderArgs);
        }
        catch (winrt::hresult_error const& ex)
        {
            // TODO: what do we do here?
            return nullptr;
        }
    }
}