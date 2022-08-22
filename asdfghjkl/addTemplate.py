import sublime, sublime_plugin, time

class InsertTemplOne(sublime_plugin.TextCommand):
    def run(self, edit):
        date = time.strftime("%d.%m.%Y")
        self.view.run_command("insert_snippet", {
            "name": "Packages/User/____main.sublime-snippet",
            "DATE": date
        })
class InsertTemplTwo(sublime_plugin.TextCommand):
    def run(self, edit):
        date = time.strftime("%d.%m.%Y %H:%M:%S")
        self.view.run_command("insert_snippet", {
            "name": "Packages/User/____VOJ.sublime-snippet",
            "DATE": date
        })
class InsertTemplThree(sublime_plugin.TextCommand):
    def run(self, edit):
        date = time.strftime("%d.%m.%Y")
        self.view.run_command("insert_snippet", {
            "name": "Packages/User/____mtt.sublime-snippet",
            "DATE": date
        })