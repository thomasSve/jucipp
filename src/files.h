#include <string>
const std::string configjson =
"{\n"
"    \"gtk_theme\": {\n"
"        \"name\": \"Adwaita\", //Use \"\" for default theme, At least these two exist on all systems: Adwaita, Raleigh\n"
"        \"variant\": \"\" //Use \"\" for default variant, and \"dark\" for dark theme variant\n"
"    },\n"
"    \"source\": {\n"
"        \"style\": \"juci\", //Choices on default install: classic, cobalt, kate, oblivion, solarized-dark, solarized-light, tango\n"
"        \"font\": \"Monospace\", //Use \"\" for default font, and for instance \"Monospace 12\" to also set size.\n"
"        \"clang_types\": {\n"
"            \"43\": \"def:type\",\n"
"            \"46\": \"def:preprocessor\",\n"
"            \"109\": \"def:constant\",\n"
"            \"702\": \"def:statement\",\n"
"            \"705\": \"def:comment\"\n"
"        },\n"
"        \"tab_size\": 2,\n"
"        \"tab_char\": \" \", //Use \"\\t\" for regular tab\n"
"        \"highlight_current_line\": true,\n"
"        \"show_line_numbers\": true\n"
"    },\n"
"    \"keybindings\": {\n"
"        \"new_file\": \"<primary>n\",\n"
"        \"open_folder\": \"<primary><alt>o\",\n"
"        \"open_file\": \"<primary>o\",\n"
"        \"save\": \"<primary>s\",\n"
"        \"save_as\": \"<primary><shift>s\",\n"
"        \"quit\": \"<primary>q\",\n"
"        \"split_window\": \"<primary><alt>s\",\n"
"        \"close_tab\": \"<primary>w\",\n"
"        \"edit_copy\": \"<primary>c\",\n"
"        \"edit_cut\": \"<primary>x\",\n"
"        \"edit_paste\": \"<primary>v\",\n"
"        \"edit_undo\": \"<primary>z\",\n"
"        \"edit_redo\": \"<primary><shift>z\",\n"
"        \"edit_find\": \"<primary>f\",\n"
"        \"source_goto_line\": \"<primary>g\",\n"
"        \"source_center_cursor\": \"<primary>l\",\n"
"        \"source_goto_declaration\": \"<primary>d\",\n"
"        \"source_goto_method\": \"<primary>m\",\n"
"        \"source_rename\": \"<primary>r\",\n"
"        \"compile_and_run\": \"<primary>Return\",\n"
"        \"compile\": \"<primary><shift>Return\",\n"
"        \"run_command\": \"<alt>Return\",\n"
"        \"kill_last_running\": \"<primary>Escape\",\n"
"        \"force_kill_last_running\": \"<primary><shift>Escape\"\n"
"    },\n"
"    \"project\": {\n"
"        \"make_command\": \"make\"\n"
"    },\n"
"    \"directoryfilter\": {\n"
"        \"ignore\": [\n"
"            \"cmake\",\n"
"            \"#\",\n"
"            \"~\",\n"
"            \".idea\",\n"
"            \".so\"\n"
"        ],\n"
"        \"exceptions\": [\n"
"            \"cmakelists.txt\"\n"
"        ]\n"
"    }\n"
"}\n";

const std::string menuxml =
"<ui>\n"
"  <menubar name=\"MenuBar\">\n"
"    <menu action=\"FileMenu\">\n"
"      <menuitem action=\"FileNewFile\"/>\n"
"      <menu action=\"FileNewProject\">\n"
"        <menuitem action=\"FileNewProjectCpp\"/>\n"
"      </menu>\n"
"      <separator/>\n"
"      <menuitem action=\"FileOpenFile\"/>\n"
"      <menuitem action=\"FileOpenFolder\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"FileSave\"/>\n"
"      <menuitem action=\"FileSaveAs\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"FileQuit\"/>\n"
"    </menu>\n"
"    <menu action=\"EditMenu\">\n"
"      <menuitem action=\"EditUndo\"/>\n"
"      <menuitem action=\"EditRedo\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"EditCopy\"/>\n"
"      <menuitem action=\"EditCut\"/>\n"
"      <menuitem action=\"EditPaste\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"EditFind\"/>\n"
"    </menu>\n"
"    <menu action=\"SourceMenu\">\n"
"      <menuitem action=\"SourceGotoLine\"/>\n"
"      <menuitem action=\"SourceCenterCursor\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"SourceGotoDeclaration\"/>\n"
"      <menuitem action=\"SourceGotoMethod\"/>\n"
"      <menuitem action=\"SourceRename\"/>\n"
"    </menu>\n"
"    <menu action=\"ProjectMenu\">\n"
"      <menuitem action=\"ProjectCompileAndRun\"/>\n"
"      <menuitem action=\"ProjectCompile\"/>\n"
"      <separator/>\n"
"      <menuitem action=\"ProjectRunCommand\"/>\n"
"      <menuitem action=\"ProjectKillLastRunning\"/>\n"
"      <menuitem action=\"ProjectForceKillLastRunning\"/>\n"
"    </menu>\n"
"    <menu action=\"WindowMenu\">\n"
"      <menuitem action=\"WindowCloseTab\"/>\n"
"      <menuitem action=\"WindowSplitWindow\"/>\n"
"    </menu>\n"
"    <menu action=\"PluginMenu\">\n"
"    </menu>\n"
"    <menu action=\"HelpMenu\">\n"
"      <menuitem action=\"HelpAbout\"/>\n"
"    </menu>\n"
"  </menubar>\n"
"</ui>\n";

const std::string juci_style =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"\n"
"<style-scheme id=\"juci\" _name=\"juci\" version=\"1.0\">\n"
"  <author>juCi++ team</author>\n"
"  <_description>Default juCi++ style</_description>\n"
"\n"
"  <!-- Palette -->\n"
"  <color name=\"white\"      value=\"#FFFFFF\"/>\n"
"  <color name=\"red\"      value=\"#FF0000\"/>\n"
"  <color name=\"blue\"      value=\"#0000FF\"/>\n"
"  <color name=\"yellow\"      value=\"#FFFF00\"/>\n"
"  <color name=\"orange\"      value=\"#FFA500\"/>\n"
"\n"
"  <!-- Global Settings -->\n"
"  <style name=\"current-line\"                background=\"#eeeeec\"/>\n"
"  <style name=\"current-line-number\"         background=\"#eeeeec\"/>\n"
"  <style name=\"draw-spaces\"                 foreground=\"#babdb6\"/>\n"
"  <style name=\"background-pattern\"          background=\"#f3f3f3\"/>\n"
"\n"
"  <!-- Bracket Matching -->\n"
"  <style name=\"bracket-match\"               foreground=\"white\" background=\"#BEBEBE\" bold=\"true\"/>\n"
"  <style name=\"bracket-mismatch\"            foreground=\"white\" background=\"#FF0000\" bold=\"true\"/>\n"
"\n"
"  <!-- Right Margin -->\n"
"  <style name=\"right-margin\"                foreground=\"#000000\" background=\"#000000\"/>\n"
"\n"
"  <!-- Search Matching -->\n"
"  <style name=\"search-match\"                background=\"yellow\"/>\n"
"\n"
"  <!-- Comments -->\n"
"  <style name=\"def:comment\"                 foreground=\"blue\"/>\n"
"\n"
"  <!-- Constants -->\n"
"  <style name=\"def:constant\"                foreground=\"#CC0000\"/>\n"
"\n"
"  <!-- Statements -->\n"
"  <style name=\"def:statement\"               foreground=\"blue\"/>\n"
"\n"
"  <!-- Types -->\n"
"  <style name=\"def:type\"                    foreground=\"#0066FF\"/>\n"
"\n"
"  <!-- Others -->\n"
"  <style name=\"def:preprocessor\"            foreground=\"#990099\"/>\n"
"  <style name=\"def:error\"                   foreground=\"red\"/>\n"
"  <style name=\"def:warning\"                 foreground=\"orange\"/>\n"
"  <style name=\"def:note\"                    background=\"yellow\"/>\n"
"\n"
"</style-scheme>\n";

const std::string pluginspy =
"#!/usr/bin/python \n"
"import juci_to_python_api as juci \n"
"import glob \n"
"\n"
"def loadplugins(): \n"
"    plugin_files = glob.glob(\"../plugins/*.py\") \n"
"    for current_file in plugin_files: \n"
"        juci.initPlugin(current_file) \n"
"loadplugins() \n";

const std::string snippetpy =
"#!/usr/bin/python \n"
"#snippet plugin \n"
"import juci_to_python_api as juci, inspect \n"
" \n"
"def initPlugin(): \n"
"    juci.addMenuElement(\"Snippet\") \n"
"    juci.addSubMenuElement(\"SnippetMenu\", #name of parent menu \n"
"                           \"Insert snippet\", #menu description \n"
"                           \"insertSnippet()\", #function to execute \n"
"                           inspect.getfile(inspect.currentframe()), #plugin path \n"
"                           \"<control><alt>space\") \n"
"snippets = {} \n"
" \n"
"snippets[\"for\"] = \"\"\"\\\n"
"for(int i=0; i<v.size(); i++) { \n"
"  // std::cout << v[i] << std::endl; \n"
"  // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"if\"] = \"\"\"\\\n"
"if(true) { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"ifelse\"] = \"\"\"\\\n"
"if(false) { \n"
"    // Write code here \n"
"} else { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"while\"] = \"\"\"\\\n"
"while(condition) { \n"
"    // Write code here \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"main\"] = \"\"\"\\\n"
"int main(int argc, char *argv[]) { \n"
"    //Do something \n"
"} \n"
"\"\"\" \n"
" \n"
"snippets[\"hello\"] = \"\"\"\\\n"
"#include <iostream> \n"
" \n"
"int main(int argc, char *argv[]) { \n"
"    std::cout << \"Hello, world! << std::endl; \n"
"} \n"
"\"\"\" \n"
" \n"
"def getSnippet(word):     \n"
"    try: \n"
"        output = snippets[word] \n"
"    except KeyError: \n"
"        output = word \n"
"    return output \n"
" \n"
"def insertSnippet(): \n"
"    theWord=juci.getWord() \n"
"    output=getSnippet(theWord) \n"
"    juci.replaceWord(output) \n";


