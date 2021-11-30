// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#define EVERYTHING_JSON \
    "{\"actions\":[{\"data\":{\"submitValue\":true},\"id\":\"Action.Submit_id\",\"title\":\"Action.Submit\",\"tooltip\":" \
    "\"tooltip\",\"type\":\"Action.Submit\"},{\"associatedInputs\":\"None\",\"data\":{\"Action.Execute_data_keyA\":\"Action." \
    "Execute_data_valueA\"},\"id\":\"Action.Execute_id\",\"isEnabled\":false,\"title\":\"Action.Execute_title\",\"type\":" \
    "\"Action.Execute\",\"verb\":\"Action.Execute_verb\"},{\"card\":{\"actions\":[],\"backgroundImage\":{\"fillMode\":" \
    "\"repeat\",\"horizontalAlignment\":\"right\",\"url\":\"https://adaptivecards.io/content/cats/" \
    "1.png\",\"verticalAlignment\":\"center\"},\"body\":[{\"isSubtle\":true,\"text\":\"Action.ShowCard " \
    "text\",\"type\":\"TextBlock\"}],\"lang\":\"en\",\"type\":\"AdaptiveCard\",\"version\":\"1.0\"},\"id\":\"Action.ShowCard_" \
    "id\",\"title\":\"Action.ShowCard\",\"tooltip\":\"tooltip\",\"type\":\"Action.ShowCard\"}],\"authentication\":{\"buttons\":" \
    "[{\"image\":\"authentication_buttons_0_image\",\"title\":\"authentication_buttons_0_title\",\"type\":\"authentication_" \
    "buttons_0_type\",\"value\":\"authentication_buttons_0_value\"}],\"connectionName\":\"authentication_connectionName\"," \
    "\"text\":\"authentication_text\",\"tokenExchangeResource\":{\"id\":\"authentication_tokenExchangeResource_id\"," \
    "\"providerId\":\"authentication_tokenExchangeResource_providerId\",\"uri\":\"authentication_tokenExchangeResource_uri\"}}," \
    "\"backgroundImage\":\"https://adaptivecards.io/content/cats/" \
    "1.png\",\"body\":[{\"color\":\"Default\",\"horizontalAlignment\":\"left\",\"id\":\"TextBlock_id\",\"isSubtle\":false," \
    "\"italic\":true,\"maxLines\":1,\"size\":\"Default\",\"strikethrough\":true,\"style\":\"heading\",\"text\":\"TextBlock_" \
    "text\",\"type\":\"TextBlock\",\"weight\":\"Default\"},{\"color\":\"Default\",\"fontType\":\"Monospace\"," \
    "\"horizontalAlignment\":\"left\",\"id\":\"TextBlock_id_mono\",\"isSubtle\":false,\"italic\":true,\"maxLines\":1,\"size\":" \
    "\"Default\",\"strikethrough\":true,\"text\":\"TextBlock_text\",\"type\":\"TextBlock\",\"weight\":\"Default\"},{\"color\":" \
    "\"Default\",\"fontType\":\"Default\",\"horizontalAlignment\":\"left\",\"id\":\"TextBlock_id_def\",\"isSubtle\":false," \
    "\"italic\":true,\"maxLines\":1,\"size\":\"Default\",\"strikethrough\":true,\"text\":\"TextBlock_text\",\"type\":" \
    "\"TextBlock\",\"weight\":\"Default\"},{\"altText\":\"Image_altText\",\"horizontalAlignment\":\"center\",\"id\":\"Image_" \
    "id\",\"isVisible\":false,\"selectAction\":{\"title\":\"Image_Action.OpenUrl\",\"type\":\"Action.OpenUrl\",\"url\":\"https:" \
    "//adaptivecards.io/" \
    "\"},\"separator\":true,\"size\":\"Auto\",\"spacing\":\"none\",\"style\":\"person\",\"type\":\"Image\",\"url\":\"https://" \
    "adaptivecards.io/content/cats/" \
    "1.png\"},{\"id\":\"Container_id\",\"items\":[{\"columns\":[{\"id\":\"Column_id1\",\"items\":[{\"type\":\"Image\",\"url\":" \
    "\"https://adaptivecards.io/content/cats/" \
    "1.png\"}],\"rtl\":false,\"style\":\"Default\",\"type\":\"Column\",\"width\":\"auto\"},{\"id\":\"Column_id2\",\"items\":[{" \
    "\"type\":\"Image\",\"url\":\"https://adaptivecards.io/content/cats/" \
    "2.png\"}],\"style\":\"Emphasis\",\"type\":\"Column\",\"width\":\"20px\"},{\"id\":\"Column_id3\",\"items\":[{\"type\":" \
    "\"Image\",\"url\":\"https://adaptivecards.io/content/cats/" \
    "3.png\"},{\"id\":\"Column3_TextBlock_id\",\"text\":\"Column3_TextBlock_text\",\"type\":\"TextBlock\"}],\"style\":" \
    "\"Default\",\"type\":\"Column\",\"width\":\"stretch\"}],\"id\":\"ColumnSet_id\",\"separator\":true,\"spacing\":\"large\"," \
    "\"type\":\"ColumnSet\"}],\"rtl\":true,\"selectAction\":{\"data\":\"Container_data\",\"title\":\"Container_Action.Submit\"," \
    "\"type\":\"Action.Submit\"},\"spacing\":\"medium\",\"style\":\"Default\",\"type\":\"Container\"},{\"facts\":[{\"title\":" \
    "\"Topping\",\"value\":\"poppyseeds\"},{\"title\":\"Topping\",\"value\":\"onion " \
    "flakes\"}],\"id\":\"FactSet_id\",\"type\":\"FactSet\"},{\"id\":\"ImageSet_id\",\"imageSize\":\"Auto\",\"images\":[{" \
    "\"type\":\"Image\",\"url\":\"https://adaptivecards.io/content/cats/1.png\"},{\"type\":\"Image\",\"url\":\"https://" \
    "adaptivecards.io/content/cats/2.png\"},{\"type\":\"Image\",\"url\":\"https://adaptivecards.io/content/cats/" \
    "3.png\"}],\"separator\":true,\"type\":\"ImageSet\"},{\"id\":\"Container_id_inputs\",\"items\":[{\"id\":\"Input.Text_id\"," \
    "\"inlineAction\":{\"iconUrl\":\"https://adaptivecards.io/content/cats/" \
    "1.png\",\"title\":\"Input.Text_Action.Submit\",\"type\":\"Action.Submit\"},\"label\":\"Input.Text_label\",\"maxLength\":" \
    "10,\"placeholder\":\"Input.Text_placeholder\",\"regex\":\"([A-Z])\\\\w+\",\"spacing\":\"small\",\"style\":\"text\"," \
    "\"type\":\"Input.Text\",\"value\":\"Input.Text_value\"},{\"id\":\"Input.Number_id\",\"isRequired\":true,\"label\":\"Input." \
    "Number_label\",\"max\":9.5,\"min\":3.5,\"placeholder\":\"Input.Number_placeholder\",\"type\":\"Input.Number\",\"value\":4." \
    "5},{\"id\":\"Input.Date_id\",\"label\":\"Input.Date_label\",\"max\":\"1/1/2020\",\"min\":\"8/1/" \
    "2018\",\"placeholder\":\"Input.Date_placeholder\",\"type\":\"Input.Date\",\"value\":\"8/9/" \
    "2018\"},{\"errorMessage\":\"Input.Time.ErrorMessage\",\"id\":\"Input.Time_id\",\"isRequired\":true,\"label\":\"Input.Time_" \
    "label\",\"max\":\"17:00\",\"min\":\"10:00\",\"placeholder\":\"Input.Time_placeholder\",\"type\":\"Input.Time\",\"value\":" \
    "\"13:00\"},{\"id\":\"Input.Toggle_id\",\"label\":\"Input.Toggle_label\",\"title\":\"Input.Toggle_title\",\"type\":\"Input." \
    "Toggle\",\"value\":\"Input.Toggle_on\",\"valueOff\":\"Input.Toggle_off\",\"valueOn\":\"Input.Toggle_on\"},{\"size\":" \
    "\"Large\",\"text\":\"Everybody's got " \
    "choices\",\"type\":\"TextBlock\",\"weight\":\"Bolder\"},{\"choices\":[{\"title\":\"Input.Choice1_title\",\"value\":" \
    "\"Input.Choice1\"},{\"title\":\"Input.Choice2_title\",\"value\":\"Input.Choice2\"},{\"title\":\"Input.Choice3_title\"," \
    "\"value\":\"Input.Choice3\"},{\"title\":\"Input.Choice4_title\",\"value\":\"Input.Choice4\"}],\"id\":\"Input.ChoiceSet_" \
    "id\",\"isMultiSelect\":true,\"label\":\"Input.ChoiceSet_label\",\"style\":\"Compact\",\"type\":\"Input.ChoiceSet\"," \
    "\"value\":\"Input.Choice2,Input.Choice4\"}],\"type\":\"Container\"},{\"actions\":[{\"associatedInputs\":\"None\",\"id\":" \
    "\"ActionSet.Action.Submit_id\",\"isEnabled\":false,\"title\":\"ActionSet.Action.Submit\",\"tooltip\":\"tooltip\",\"type\":" \
    "\"Action.Submit\"},{\"id\":\"ActionSet.Action.OpenUrl_id\",\"title\":\"ActionSet.Action.OpenUrl\",\"tooltip\":\"tooltip\"," \
    "\"type\":\"Action.OpenUrl\",\"url\":\"https://adaptivecards.io/" \
    "\"}],\"type\":\"ActionSet\"},{\"horizontalAlignment\":\"right\",\"id\":\"RichTextBlock_id\",\"inlines\":[{\"color\":" \
    "\"Dark\",\"fontType\":\"Monospace\",\"highlight\":true,\"isSubtle\":true,\"italic\":true,\"size\":\"Large\"," \
    "\"strikethrough\":true,\"text\":\"This is a text " \
    "run\",\"type\":\"TextRun\",\"underline\":true,\"weight\":\"Bolder\"},{\"selectAction\":{\"type\":\"Action.Submit\"}," \
    "\"text\":\"This is another text run\",\"type\":\"TextRun\"},{\"text\":\"This is a text run specified as a " \
    "string\",\"type\":\"TextRun\"}],\"type\":\"RichTextBlock\"}],\"fallbackText\":\"fallbackText\",\"lang\":\"en\"," \
    "\"refresh\":{\"action\":{\"id\":\"refresh_action_id\",\"type\":\"Action.Execute\",\"verb\":\"refresh_action_verb\"}," \
    "\"userIds\":[\"refresh_userIds_0\"]},\"rtl\":false,\"speak\":\"speak\",\"type\":\"AdaptiveCard\",\"version\":\"1.0\"}\n"

// TODO: Use multiline string for readability
