import sublime, sublime_plugin, time

class InsertDateOne(sublime_plugin.TextCommand):
    def run(self, edit):
        date = time.strftime("%d.%m.%Y")
        self.view.run_command("insert_snippet", {
            "name": "Packages/User/____main.sublime-snippet",
            "DATE": date
        })
