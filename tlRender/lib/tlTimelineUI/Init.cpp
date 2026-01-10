// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2021-2024 Darby Johnston
// All rights reserved.

#include <tlTimelineUI/ThumbnailSystem.h>
#include <tlTimelineUI/Init.h>

#include <tlUI/Init.h>

#include <tlTimeline/Init.h>

namespace tl
{
    namespace TIMELINEUI
    {
        void init(const std::shared_ptr<system::Context>& context)
        {
            tl::timeline::init(context);
            tl::ui::init(context);
            if (!context->getSystem<TIMELINEUI::ThumbnailSystem>())
            {
                context->addSystem(TIMELINEUI::ThumbnailSystem::create(context));
            }
        }
    } // namespace TIMELINEUI
} // namespace tl
