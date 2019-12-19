#include "../../inc/MarlinConfig.h"
#include "../../lcd/ultralcd.h"
#include "../../lcd/dogm/ultralcd_DOGM.h"

namespace UserData
{
    void onLoadSettings(const Container& data)
    {
        switchColor(data.ui_fg_color, data.ui_bg_color);
    }

    void onStoreSettings(Container& data)
    {
        data.ui_fg_color = ui_color;
        data.ui_bg_color = bg_color;
    }
}