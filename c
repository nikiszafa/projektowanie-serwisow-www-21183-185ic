[1mdiff --git a/.gitignore b/.gitignore[m
[1mindex 38e73c4..4d29575 100644[m
[1m--- a/.gitignore[m
[1m+++ b/.gitignore[m
[36m@@ -1,133 +1,4 @@[m
[31m-# Byte-compiled / optimized / DLL files[m
[31m-__pycache__/[m
[31m-*.py[cod][m
[31m-*$py.class[m
[31m-[m
[31m-# C extensions[m
[31m-*.so[m
[31m-[m
[31m-# Distribution / packaging[m
[31m-.Python[m
[31m-build/[m
[31m-develop-eggs/[m
[31m-dist/[m
[31m-downloads/[m
[31m-eggs/[m
[31m-.eggs/[m
[31m-lib/[m
[31m-lib64/[m
[31m-parts/[m
[31m-sdist/[m
[31m-var/[m
[31m-wheels/[m
[31m-pip-wheel-metadata/[m
[31m-share/python-wheels/[m
[31m-*.egg-info/[m
[31m-.installed.cfg[m
[31m-*.egg[m
[31m-MANIFEST[m
[31m-[m
[31m-# PyInstaller[m
[31m-#  Usually these files are written by a python script from a template[m
[31m-#  before PyInstaller builds the exe, so as to inject date/other infos into it.[m
[31m-*.manifest[m
[31m-*.spec[m
[31m-[m
[31m-# Installer logs[m
[31m-pip-log.txt[m
[31m-pip-delete-this-directory.txt[m
[31m-[m
[31m-# Unit test / coverage reports[m
[31m-htmlcov/[m
[31m-.tox/[m
[31m-.nox/[m
[31m-.coverage[m
[31m-.coverage.*[m
[31m-.cache[m
[31m-nosetests.xml[m
[31m-coverage.xml[m
[31m-*.cover[m
[31m-*.py,cover[m
[31m-.hypothesis/[m
[31m-.pytest_cache/[m
[31m-[m
[31m-# Translations[m
[31m-*.mo[m
[31m-*.pot[m
[31m-[m
[31m-# Django stuff:[m
[31m-*.log[m
[31m-local_settings.py[m
[31m-db.sqlite3[m
[31m-db.sqlite3-journal[m
[31m-[m
[31m-# Flask stuff:[m
[31m-instance/[m
[31m-.webassets-cache[m
[31m-[m
[31m-# Scrapy stuff:[m
[31m-.scrapy[m
[31m-[m
[31m-# Sphinx documentation[m
[31m-docs/_build/[m
[31m-[m
[31m-# PyBuilder[m
[31m-target/[m
[31m-[m
[31m-# Jupyter Notebook[m
[31m-.ipynb_checkpoints[m
[31m-[m
[31m-# IPython[m
[31m-profile_default/[m
[31m-ipython_config.py[m
[31m-[m
[31m-# pyenv[m
[31m-.python-version[m
[31m-[m
[31m-# pipenv[m
[31m-#   According to pypa/pipenv#598, it is recommended to include Pipfile.lock in version control.[m
[31m-#   However, in case of collaboration, if having platform-specific dependencies or dependencies[m
[31m-#   having no cross-platform support, pipenv may install dependencies that don't work, or not[m
[31m-#   install all needed dependencies.[m
[31m-#Pipfile.lock[m
[31m-[m
[31m-# PEP 582; used by e.g. github.com/David-OConnor/pyflow[m
[31m-__pypackages__/[m
[31m-[m
[31m-# Celery stuff[m
[31m-celerybeat-schedule[m
[31m-celerybeat.pid[m
[31m-[m
[31m-# SageMath parsed files[m
[31m-*.sage.py[m
[31m-[m
[31m-# Environments[m
[31m-.env[m
[31m-.venv[m
[31m-env/[m
[31m-venv/[m
[31m-ENV/[m
[31m-env.bak/[m
[31m-venv.bak/[m
[31m-[m
[31m-# Spyder project settings[m
[31m-.spyderproject[m
[31m-.spyproject[m
[31m-[m
[31m-# Rope project settings[m
[31m-.ropeproject[m
[31m-[m
[31m-# mkdocs documentation[m
[31m-/site[m
[31m-[m
[31m-# mypy[m
[31m-.mypy_cache/[m
[31m-.dmypy.json[m
[31m-dmypy.json[m
[31m-[m
[31m-# Pyre type checker[m
[31m-.pyre/[m
[31m-[m
[32m+[m[32m# See https://help.github.com/articles/ignoring-files/ for more about ignoring files.[m
 [m
 # dependencies[m
 /node_modules[m
[36m@@ -150,5 +21,3 @@[m [mdmypy.json[m
 npm-debug.log*[m
 yarn-debug.log*[m
 yarn-error.log*[m
[31m-[m
[31m-node_modules/[m
\ No newline at end of file[m
[1mdiff --git a/Lab1/README.md b/Lab1/README.md[m
[1mdeleted file mode 100644[m
[1mindex 5bd9fb7..0000000[m
[1m--- a/Lab1/README.md[m
[1m+++ /dev/null[m
[36m@@ -1,18 +0,0 @@[m
[31m-### projektowanie-serwisow-www-nw-185ic[m
[31m-[m
[31m-## Lab nr 1 Praca z systemem kontroli wersji. Podstawy WWW.[m
[31m-[m
[31m-Utworzyłem prostą stronę internetową z użyciem darmowego szablonu bootstrap.[m
[31m-[m
[31m-Strona główna:[m
[31m-![strona głóna](/Lab1/screenshots/1.JPG)[m
[31m-[m
[31m-Zakładka List[m
[31m-![List](/Lab1/screenshots/2.JPG)[m
[31m-[m
[31m-Zakładka Podręcznik[m
[31m-![List](/Lab1/screenshots/3.JPG)[m
[31m-[m
[31m-Zakładka Formularz[m
[31m-![List](/Lab1/screenshots/4.JPG)[m
[31m-[m
[1mdiff --git a/Lab1/form.html b/Lab1/form.html[m
[1mdeleted file mode 100644[m
[1mindex 5546800..0000000[m
[1m--- a/Lab1/form.html[m
[1m+++ /dev/null[m
[36m@@ -1,147 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-[m
[31m-<head>[m
[31m-[m
[31m-  <meta charset="utf-8">[m
[31m-  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-  <meta name="description" content="">[m
[31m-  <meta name="author" content="">[m
[31m-[m
[31m-  <title>Nikodem Wrosz - Website</title>[m
[31m-[m
[31m-  <!-- Bootstrap core CSS -->[m
[31m-  <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">[m
[31m-[m
[31m-</head>[m
[31m-[m
[31m-<body>[m
[31m-[m
[31m-  <!-- Navigation -->[m
[31m-  <nav class="navbar navbar-expand-lg navbar-dark bg-primary static-top">[m
[31m-    <div class="container">[m
[31m-      <a class="navbar-brand" href="index.html">Nikodem Wrosz - Website</a>[m
[31m-      <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarResponsive"[m
[31m-        aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-        <span class="navbar-toggler-icon"></span>[m
[31m-      </button>[m
[31m-      <div class="collapse navbar-collapse" id="navbarResponsive">[m
[31m-        <ul class="navbar-nav ml-auto">[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="index.html">Strona Główna[m
[31m-              <span class="sr-only">(current)</span>[m
[31m-            </a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="letter.html">List</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="podrecznik.html">Podręcznik</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link active" href="form.html">Formularz</a>[m
[31m-          </li>[m
[31m-        </ul>[m
[31m-      </div>[m
[31m-    </div>[m
[31m-  </nav>[m
[31m-[m
[31m-  <!-- Page Content -->[m
[31m-  <div class="container border" style="margin-top: 40px;">[m
[31m-    <h1 style="text-align: center;">Formularz Zgłoszeniowy</h1>[m
[31m-    <div class="row" style="margin-top: 30px;">[m
[31m-      <div class="col-6">[m
[31m-        <div class="form-group">[m
[31m-          <label for="imieInput">Imię</label>[m
[31m-          <input type="imie" class="form-control" id="imieInput" placeholder="Wpisz imię">[m
[31m-        </div>[m
[31m-      </div>[m
[31m-[m
[31m-      <div class="col-6">[m
[31m-        <div class="form-group">[m
[31m-          <label for="nazwiskoInput">Nazwisko</label>[m
[31m-          <input type="imie" class="form-control" id="nazwiskoInput" placeholder="Wpisz nazwisko">[m
[31m-        </div>[m
[31m-[m
[31m-      </div>[m
[31m-    </div>[m
[31m-[m
[31m-    <div class="row">[m
[31m-      <div class="col-4">[m
[31m-        <div class="form-group">[m
[31m-          <label for="wyborKlasy">Wybierz Klasę</label>[m
[31m-          <select class="form-control" id="wyborKlasy">[m
[31m-            <option>Klasa 1</option>[m
[31m-            <option>Klasa 2</option>[m
[31m-            <option>Klasa 3</option>[m
[31m-            <option>Klasa 4</option>[m
[31m-            <option>Klasa 5</option>[m
[31m-          </select>[m
[31m-        </div>[m
[31m-      </div>[m
[31m-[m
[31m-      <div class="col-4">[m
[31m-        <div class="form-group">[m
[31m-          <label for="wyborPrzedmiotu">Wybierz Przedmiot</label>[m
[31m-          <select multiple class="form-control" id="wyborPrzedmiotu">[m
[31m-            <option>Matematyka</option>[m
[31m-            <option>Fizyka</option>[m
[31m-            <option>Angielski</option>[m
[31m-            <option>Chemia</option>[m
[31m-            <option>Polski</option>[m
[31m-          </select>[m
[31m-        </div>[m
[31m-[m
[31m-      </div>[m
[31m-[m
[31m-      <div class="col-4">[m
[31m-        <p>Rodzaj wyżywienia</p>[m
[31m-        <div class="form-check">[m
[31m-          <input class="form-check-input" type="checkbox" value="" id="defaultCheck1">[m
[31m-          <label class="form-check-label" for="defaultCheck1">[m
[31m-            Wyżywienie wegańskie[m
[31m-          </label>[m
[31m-        </div>[m
[31m-[m
[31m-        <div class="form-check">[m
[31m-          <input class="form-check-input" type="checkbox" value="" id="defaultCheck2">[m
[31m-          <label class="form-check-label" for="defaultCheck2">[m
[31m-            Wyżywienie wegetariańskie[m
[31m-          </label>[m
[31m-        </div>[m
[31m-[m
[31m-        <div class="form-check">[m
[31m-          <input class="form-check-input" type="checkbox" value="" id="defaultCheck3">[m
[31m-          <label class="form-check-label" for="defaultCheck3">[m
[31m-            Wyżywienie chińskie[m
[31m-          </label>[m
[31m-        </div>[m
[31m-      </div>[m
[31m-    </div>[m
[31m-[m
[31m-    <div class="row">[m
[31m-      <div class="col-12">[m
[31m-        <form>[m
[31m-          <div class="form-group">[m
[31m-            <label for="exampleFormControlFile1">Prześlij świadectwo</label>[m
[31m-            <input type="file" class="form-control-file" id="exampleFormControlFile1">[m
[31m-          </div>[m
[31m-        </form>[m
[31m-      </div>[m
[31m-    </div>[m
[31m-[m
[31m-    <div class="row" style="margin-top: 10px; margin-bottom: 10px;">[m
[31m-      <div class="col-12">[m
[31m-        <button type="submit" class="btn btn-primary">Wyślij zgłoszenie</button>[m
[31m-[m
[31m-      </div>[m
[31m-    </div>[m
[31m-[m
[31m-  </div>[m
[31m-  <!-- Bootstrap core JavaScript -->[m
[31m-  <script src="vendor/jquery/jquery.slim.min.js"></script>[m
[31m-  <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>[m
[31m-[m
[31m-</body>[m
[31m-[m
[31m-</html>[m
\ No newline at end of file[m
[1mdiff --git a/Lab1/index.html b/Lab1/index.html[m
[1mdeleted file mode 100644[m
[1mindex 58ef56b..0000000[m
[1m--- a/Lab1/index.html[m
[1m+++ /dev/null[m
[36m@@ -1,78 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-[m
[31m-<head>[m
[31m-[m
[31m-  <meta charset="utf-8">[m
[31m-  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-  <meta name="description" content="">[m
[31m-  <meta name="author" content="">[m
[31m-[m
[31m-  <title>Nikodem Wrosz - Website</title>[m
[31m-[m
[31m-  <!-- Bootstrap core CSS -->[m
[31m-  <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">[m
[31m-[m
[31m-</head>[m
[31m-[m
[31m-<body>[m
[31m-[m
[31m-  <!-- Navigation -->[m
[31m-  <nav class="navbar navbar-expand-lg navbar-dark bg-primary static-top">[m
[31m-    <div class="container">[m
[31m-      <a class="navbar-brand" href="index.html">Nikodem Wrosz - Website</a>[m
[31m-      <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-        <span class="navbar-toggler-icon"></span>[m
[31m-      </button>[m
[31m-      <div class="collapse navbar-collapse" id="navbarResponsive">[m
[31m-        <ul class="navbar-nav ml-auto">[m
[31m-          <li class="nav-item active">[m
[31m-            <a class="nav-link" href="index.html">Strona Główna[m
[31m-              <span class="sr-only">(current)</span>[m
[31m-            </a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="letter.html">List</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="podrecznik.html">Podręcznik</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="form.html">Formularz</a>[m
[31m-          </li>[m
[31m-        </ul>[m
[31m-      </div>[m
[31m-    </div>[m
[31m-  </nav>[m
[31m-[m
[31m-  <!-- Page Content -->[m
[31m-  <div class="container">[m
[31m-    <div class="row">[m
[31m-      <div class="col-md-8 text-center" style="margin-top: 40px;">[m
[31m-        <img src="media/amw_logo.png" class="img-thumbnail" alt="Logo Uczelni">[m
[31m-        <h1 class="mt-5">Nikodem Wrosz</h1>[m
[31m-        <h2 class="lead">Student of the Polish Naval Academy of the Heroes of Westerplatte!</h2>[m
[31m-        <p> Karierę piłkarską rozpoczął w klubie Zawisza Grzmiąca. Następnie spędził trzy sezony w Gwardii Koszalin, po czym przeszedł do krakowskiej Wisły. W pierwszym sezonie Lewandowski zaliczył 8 występów – wszystkie bez gola. Kolejne 5 sezonów było już bardziej udane: łącznie w Wiśle rozegrał 124 mecze strzelając 11 goli. Najlepszy sezon w barwach Wisły to ten ostatni, w którym Lewandowski zdobył 7 goli. Następnie nadeszło wypożyczenie do</p>[m
[31m-      </div>[m
[31m-      <div class="col-md-4 text-center">[m
[31m-        <h5 class="mt-5">Używam narzędzi</h1>[m
[31m-          <ul class="list-group" style="margin-top: 20px;">[m
[31m-            <li class="list-group-item list-group-item-primary">Visual Studio Code</li>[m
[31m-            <li class="list-group-item list-group-item-secondary">Html JavaScript CSS</li>[m
[31m-            <li class="list-group-item list-group-item-success">Windows 10</li>[m
[31m-            <li class="list-group-item list-group-item-danger">Lenovo Thinkpad</li>[m
[31m-            <li class="list-group-item list-group-item-dark">Xiaomi Redmi Note</li>[m
[31m-          </ul>[m
[31m-          [m
[31m-[m
[31m-      </div>[m
[31m-    </div>[m
[31m-  </div>[m
[31m-[m
[31m-  <!-- Bootstrap core JavaScript -->[m
[31m-  <script src="vendor/jquery/jquery.slim.min.js"></script>[m
[31m-  <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>[m
[31m-[m
[31m-</body>[m
[31m-[m
[31m-</html>[m
[1mdiff --git a/Lab1/letter.html b/Lab1/letter.html[m
[1mdeleted file mode 100644[m
[1mindex e85f781..0000000[m
[1m--- a/Lab1/letter.html[m
[1m+++ /dev/null[m
[36m@@ -1,70 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-[m
[31m-<head>[m
[31m-[m
[31m-  <meta charset="utf-8">[m
[31m-  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-  <meta name="description" content="">[m
[31m-  <meta name="author" content="">[m
[31m-[m
[31m-  <title>Nikodem Wrosz - Website</title>[m
[31m-[m
[31m-  <!-- Bootstrap core CSS -->[m
[31m-  <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">[m
[31m-[m
[31m-</head>[m
[31m-[m
[31m-<body>[m
[31m-[m
[31m-  <!-- Navigation -->[m
[31m-  <nav class="navbar navbar-expand-lg navbar-dark bg-primary static-top">[m
[31m-    <div class="container">[m
[31m-      <a class="navbar-brand" href="index.html">Nikodem Wrosz - Website</a>[m
[31m-      <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-        <span class="navbar-toggler-icon"></span>[m
[31m-      </button>[m
[31m-      <div class="collapse navbar-collapse" id="navbarResponsive">[m
[31m-        <ul class="navbar-nav ml-auto">[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="index.html">Strona Główna[m
[31m-              <span class="sr-only">(current)</span>[m
[31m-            </a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link active" href="letter.html">List</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="podrecznik.html">Podręcznik</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="form.html">Formularz</a>[m
[31m-          </li>[m
[31m-        </ul>[m
[31m-      </div>[m
[31m-    </div>[m
[31m-  </nav>[m
[31m-[m
[31m-  <!-- Page Content -->[m
[31m-  <div class="container border" style="margin-top: 40px;">[m
[31m-      <p style="text-align: right;">Warszawa 20.10.2019</p>[m
[31m-      <p style="text-align: left;">[m
[31m-      Nikodem Wrosz <br>[m
[31m-      ul. Kościuszki 85 <br>[m
[31m-      00-000 Warszawa<br>[m
[31m-      </p>[m
[31m-      <p style="text-align: center;">Szanowni Państwo!!</p>[m
[31m-      <p> Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.</p>[m
[31m-      <p style="text-align:right;">Z poważaniem <br>[m
[31m-        Nikodem Wrosz[m
[31m-      </p>[m
[31m-[m
[31m-  </div>[m
[31m-[m
[31m-  <!-- Bootstrap core JavaScript -->[m
[31m-  <script src="vendor/jquery/jquery.slim.min.js"></script>[m
[31m-  <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>[m
[31m-[m
[31m-</body>[m
[31m-[m
[31m-</html>[m
[1mdiff --git a/Lab1/media/amw_logo.png b/Lab1/media/amw_logo.png[m
[1mdeleted file mode 100644[m
[1mindex 169c400..0000000[m
Binary files a/Lab1/media/amw_logo.png and /dev/null differ
[1mdiff --git a/Lab1/media/wzory.jpg b/Lab1/media/wzory.jpg[m
[1mdeleted file mode 100644[m
[1mindex 6fd8001..0000000[m
Binary files a/Lab1/media/wzory.jpg and /dev/null differ
[1mdiff --git a/Lab1/podrecznik.html b/Lab1/podrecznik.html[m
[1mdeleted file mode 100644[m
[1mindex 1ffc08d..0000000[m
[1m--- a/Lab1/podrecznik.html[m
[1m+++ /dev/null[m
[36m@@ -1,126 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-[m
[31m-<head>[m
[31m-[m
[31m-  <meta charset="utf-8">[m
[31m-  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-  <meta name="description" content="">[m
[31m-  <meta name="author" content="">[m
[31m-[m
[31m-  <title>Nikodem Wrosz - Website</title>[m
[31m-[m
[31m-  <!-- Bootstrap core CSS -->[m
[31m-  <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">[m
[31m-[m
[31m-</head>[m
[31m-[m
[31m-<body>[m
[31m-[m
[31m-  <!-- Navigation -->[m
[31m-  <nav class="navbar navbar-expand-lg navbar-dark bg-primary static-top">[m
[31m-    <div class="container">[m
[31m-      <a class="navbar-brand" href="index.html">Nikodem Wrosz - Website</a>[m
[31m-      <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-        <span class="navbar-toggler-icon"></span>[m
[31m-      </button>[m
[31m-      <div class="collapse navbar-collapse" id="navbarResponsive">[m
[31m-        <ul class="navbar-nav ml-auto">[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="index.html">Strona Główna[m
[31m-              <span class="sr-only">(current)</span>[m
[31m-            </a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="letter.html">List</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link active" href="podrecznik.html">Podręcznik</a>[m
[31m-          </li>[m
[31m-          <li class="nav-item">[m
[31m-            <a class="nav-link" href="form.html">Formularz</a>[m
[31m-          </li>[m
[31m-        </ul>[m
[31m-      </div>[m
[31m-    </div>[m
[31m-  </nav>[m
[31m-[m
[31m-  <!-- Page Content -->[m
[31m-  <div class="container" style="margin-top: 40px;">[m
[31m-    <div class="row">[m
[31m-[m
[31m-        <div class="col-md-5">[m
[31m-            <h3>Typy danych</h6>[m
[31m-            <p style="text-align: justify;">W Javie podobnie jak w innych językach wyróżniamy wiele typów danych mogących przechowywać zarówno liczby całkowite jak i zmiennoprzecinkowe, znaki, ciągi znaków, oraz typ logiczny. Java posiada ścisłą kontrolę typów, czyli mówiąc prościej wszystko co zapisujemy musi mieć określony typ, musimy wskazać, czy coś jest np. liczbą, albo napisem.</p>[m
[31m-        </div>[m
[31m-[m
[31m-        <div class="col-md-7" style="margin-top: 40px;">[m
[31m-            <table class="table table-warning">[m
[31m-                <thead class="thead-dark">[m
[31m-                  <tr style="text-align: center;">[m
[31m-                    <th scope="col">Nazwa typu</th>[m
[31m-                    <th scope="col">Liczba bajtów</th>[m
[31m-                    <th scope="col">Dopiszczalne wartości</th>[m
[31m-                    <th scope="col">Przykłady</th>[m
[31m-                  </tr>[m
[31m-                </thead>[m
[31m-                <tbody>[m
[31m-                  <tr>[m
[31m-                    <th scope="row">byte</th>[m
[31m-                    <td>1</td>[m
[31m-                    <td>-128...127</td>[m
[31m-                    <td>int</td>[m
[31m-                  </tr>[m
[31m-                  <tr>[m
[31m-                    <th scope="row">short</th>[m
[31m-                    <td>2</td>[m
[31m-                    <td>-32768....32767</td>[m
[31m-                    <td>sasas</td>[m
[31m-                  </tr>[m
[31m-                  <tr>[m
[31m-                    <th scope="row">int</th>[m
[31m-                    <td>4</td>[m
[31m-                    <td>-2124124124124 ....1234124124124</td>[m
[31m-                    <td>@asdas</td>[m
[31m-                  </tr>[m
[31m-                  <tr>[m
[31m-                    <th scope="row">int</th>[m
[31m-                    <td>4</td>[m
[31m-                    <td>-2124124124124 ....1234124124124</td>[m
[31m-                    <td>@asdas</td>[m
[31m-                  </tr>[m
[31m-                  <tr class="bg-info">[m
[31m-                    <th scope="row">byte</th>[m
[31m-                    <td>1</td>[m
[31m-                    <td>-128...127</td>[m
[31m-                    <td>int</td>[m
[31m-                  </tr>[m
[31m-                  <tr>[m
[31m-                    <th scope="row">byte</th>[m
[31m-                    <td>1</td>[m
[31m-                    <td>-128...127</td>[m
[31m-                    <td>int</td>[m
[31m-                  </tr>[m
[31m-                </tbody>[m
[31m-              </table>[m
[31m-[m
[31m-        </div>[m
[31m-[m
[31m-[m
[31m-    </div>[m
[31m-[m
[31m-    <div class="row">[m
[31m-        <div class="col">[m
[31m-            <img src="media/wzory.jpg" class="img-fluid" alt="Responsive image">[m
[31m-        </div>[m
[31m-    </div>[m
[31m-[m
[31m-  </div>[m
[31m-[m
[31m-  <!-- Bootstrap core JavaScript -->[m
[31m-  <script src="vendor/jquery/jquery.slim.min.js"></script>[m
[31m-  <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>[m
[31m-[m
[31m-</body>[m
[31m-[m
[31m-</html>[m
[1mdiff --git a/Lab1/screenshots/1.JPG b/Lab1/screenshots/1.JPG[m
[1mdeleted file mode 100644[m
[1mindex c0170e6..0000000[m
Binary files a/Lab1/screenshots/1.JPG and /dev/null differ
[1mdiff --git a/Lab1/screenshots/2.JPG b/Lab1/screenshots/2.JPG[m
[1mdeleted file mode 100644[m
[1mindex 50967ab..0000000[m
Binary files a/Lab1/screenshots/2.JPG and /dev/null differ
[1mdiff --git a/Lab1/screenshots/3.JPG b/Lab1/screenshots/3.JPG[m
[1mdeleted file mode 100644[m
[1mindex 8cf665c..0000000[m
Binary files a/Lab1/screenshots/3.JPG and /dev/null differ
[1mdiff --git a/Lab1/screenshots/4.JPG b/Lab1/screenshots/4.JPG[m
[1mdeleted file mode 100644[m
[1mindex 7e7de73..0000000[m
Binary files a/Lab1/screenshots/4.JPG and /dev/null differ
[1mdiff --git a/Lab1/vendor/bootstrap/css/bootstrap-grid.css b/Lab1/vendor/bootstrap/css/bootstrap-grid.css[m
[1mdeleted file mode 100644[m
[1mindex 40ee85d..0000000[m
[1m--- a/Lab1/vendor/bootstrap/css/bootstrap-grid.css[m
[1m+++ /dev/null[m
[36m@@ -1,3904 +0,0 @@[m
[31m-/*![m
[31m- * Bootstrap Grid v4.5.0 (https://getbootstrap.com/)[m
[31m- * Copyright 2011-2020 The Bootstrap Authors[m
[31m- * Copyright 2011-2020 Twitter, Inc.[m
[31m- * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)[m
[31m- */[m
[31m-html {[m
[31m-  box-sizing: border-box;[m
[31m-  -ms-overflow-style: scrollbar;[m
[31m-}[m
[31m-[m
[31m-*,[m
[31m-*::before,[m
[31m-*::after {[m
[31m-  box-sizing: inherit;[m
[31m-}[m
[31m-[m
[31m-.container {[m
[31m-  width: 100%;[m
[31m-  padding-right: 15px;[m
[31m-  padding-left: 15px;[m
[31m-  margin-right: auto;[m
[31m-  margin-left: auto;[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 576px) {[m
[31m-  .container {[m
[31m-    max-width: 540px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 768px) {[m
[31m-  .container {[m
[31m-    max-width: 720px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 992px) {[m
[31m-  .container {[m
[31m-    max-width: 960px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 1200px) {[m
[31m-  .container {[m
[31m-    max-width: 1140px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-.container-fluid, .container-sm, .container-md, .container-lg, .container-xl {[m
[31m-  width: 100%;[m
[31m-  padding-right: 15px;[m
[31m-  padding-left: 15px;[m
[31m-  margin-right: auto;[m
[31m-  margin-left: auto;[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 576px) {[m
[31m-  .container, .container-sm {[m
[31m-    max-width: 540px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 768px) {[m
[31m-  .container, .container-sm, .container-md {[m
[31m-    max-width: 720px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 992px) {[m
[31m-  .container, .container-sm, .container-md, .container-lg {[m
[31m-    max-width: 960px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 1200px) {[m
[31m-  .container, .container-sm, .container-md, .container-lg, .container-xl {[m
[31m-    max-width: 1140px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-.row {[m
[31m-  display: -ms-flexbox;[m
[31m-  display: flex;[m
[31m-  -ms-flex-wrap: wrap;[m
[31m-  flex-wrap: wrap;[m
[31m-  margin-right: -15px;[m
[31m-  margin-left: -15px;[m
[31m-}[m
[31m-[m
[31m-.no-gutters {[m
[31m-  margin-right: 0;[m
[31m-  margin-left: 0;[m
[31m-}[m
[31m-[m
[31m-.no-gutters > .col,[m
[31m-.no-gutters > [class*="col-"] {[m
[31m-  padding-right: 0;[m
[31m-  padding-left: 0;[m
[31m-}[m
[31m-[m
[31m-.col-1, .col-2, .col-3, .col-4, .col-5, .col-6, .col-7, .col-8, .col-9, .col-10, .col-11, .col-12, .col,[m
[31m-.col-auto, .col-sm-1, .col-sm-2, .col-sm-3, .col-sm-4, .col-sm-5, .col-sm-6, .col-sm-7, .col-sm-8, .col-sm-9, .col-sm-10, .col-sm-11, .col-sm-12, .col-sm,[m
[31m-.col-sm-auto, .col-md-1, .col-md-2, .col-md-3, .col-md-4, .col-md-5, .col-md-6, .col-md-7, .col-md-8, .col-md-9, .col-md-10, .col-md-11, .col-md-12, .col-md,[m
[31m-.col-md-auto, .col-lg-1, .col-lg-2, .col-lg-3, .col-lg-4, .col-lg-5, .col-lg-6, .col-lg-7, .col-lg-8, .col-lg-9, .col-lg-10, .col-lg-11, .col-lg-12, .col-lg,[m
[31m-.col-lg-auto, .col-xl-1, .col-xl-2, .col-xl-3, .col-xl-4, .col-xl-5, .col-xl-6, .col-xl-7, .col-xl-8, .col-xl-9, .col-xl-10, .col-xl-11, .col-xl-12, .col-xl,[m
[31m-.col-xl-auto {[m
[31m-  position: relative;[m
[31m-  width: 100%;[m
[31m-  padding-right: 15px;[m
[31m-  padding-left: 15px;[m
[31m-}[m
[31m-[m
[31m-.col {[m
[31m-  -ms-flex-preferred-size: 0;[m
[31m-  flex-basis: 0;[m
[31m-  -ms-flex-positive: 1;[m
[31m-  flex-grow: 1;[m
[31m-  min-width: 0;[m
[31m-  max-width: 100%;[m
[31m-}[m
[31m-[m
[31m-.row-cols-1 > * {[m
[31m-  -ms-flex: 0 0 100%;[m
[31m-  flex: 0 0 100%;[m
[31m-  max-width: 100%;[m
[31m-}[m
[31m-[m
[31m-.row-cols-2 > * {[m
[31m-  -ms-flex: 0 0 50%;[m
[31m-  flex: 0 0 50%;[m
[31m-  max-width: 50%;[m
[31m-}[m
[31m-[m
[31m-.row-cols-3 > * {[m
[31m-  -ms-flex: 0 0 33.333333%;[m
[31m-  flex: 0 0 33.333333%;[m
[31m-  max-width: 33.333333%;[m
[31m-}[m
[31m-[m
[31m-.row-cols-4 > * {[m
[31m-  -ms-flex: 0 0 25%;[m
[31m-  flex: 0 0 25%;[m
[31m-  max-width: 25%;[m
[31m-}[m
[31m-[m
[31m-.row-cols-5 > * {[m
[31m-  -ms-flex: 0 0 20%;[m
[31m-  flex: 0 0 20%;[m
[31m-  max-width: 20%;[m
[31m-}[m
[31m-[m
[31m-.row-cols-6 > * {[m
[31m-  -ms-flex: 0 0 16.666667%;[m
[31m-  flex: 0 0 16.666667%;[m
[31m-  max-width: 16.666667%;[m
[31m-}[m
[31m-[m
[31m-.col-auto {[m
[31m-  -ms-flex: 0 0 auto;[m
[31m-  flex: 0 0 auto;[m
[31m-  width: auto;[m
[31m-  max-width: 100%;[m
[31m-}[m
[31m-[m
[31m-.col-1 {[m
[31m-  -ms-flex: 0 0 8.333333%;[m
[31m-  flex: 0 0 8.333333%;[m
[31m-  max-width: 8.333333%;[m
[31m-}[m
[31m-[m
[31m-.col-2 {[m
[31m-  -ms-flex: 0 0 16.666667%;[m
[31m-  flex: 0 0 16.666667%;[m
[31m-  max-width: 16.666667%;[m
[31m-}[m
[31m-[m
[31m-.col-3 {[m
[31m-  -ms-flex: 0 0 25%;[m
[31m-  flex: 0 0 25%;[m
[31m-  max-width: 25%;[m
[31m-}[m
[31m-[m
[31m-.col-4 {[m
[31m-  -ms-flex: 0 0 33.333333%;[m
[31m-  flex: 0 0 33.333333%;[m
[31m-  max-width: 33.333333%;[m
[31m-}[m
[31m-[m
[31m-.col-5 {[m
[31m-  -ms-flex: 0 0 41.666667%;[m
[31m-  flex: 0 0 41.666667%;[m
[31m-  max-width: 41.666667%;[m
[31m-}[m
[31m-[m
[31m-.col-6 {[m
[31m-  -ms-flex: 0 0 50%;[m
[31m-  flex: 0 0 50%;[m
[31m-  max-width: 50%;[m
[31m-}[m
[31m-[m
[31m-.col-7 {[m
[31m-  -ms-flex: 0 0 58.333333%;[m
[31m-  flex: 0 0 58.333333%;[m
[31m-  max-width: 58.333333%;[m
[31m-}[m
[31m-[m
[31m-.col-8 {[m
[31m-  -ms-flex: 0 0 66.666667%;[m
[31m-  flex: 0 0 66.666667%;[m
[31m-  max-width: 66.666667%;[m
[31m-}[m
[31m-[m
[31m-.col-9 {[m
[31m-  -ms-flex: 0 0 75%;[m
[31m-  flex: 0 0 75%;[m
[31m-  max-width: 75%;[m
[31m-}[m
[31m-[m
[31m-.col-10 {[m
[31m-  -ms-flex: 0 0 83.333333%;[m
[31m-  flex: 0 0 83.333333%;[m
[31m-  max-width: 83.333333%;[m
[31m-}[m
[31m-[m
[31m-.col-11 {[m
[31m-  -ms-flex: 0 0 91.666667%;[m
[31m-  flex: 0 0 91.666667%;[m
[31m-  max-width: 91.666667%;[m
[31m-}[m
[31m-[m
[31m-.col-12 {[m
[31m-  -ms-flex: 0 0 100%;[m
[31m-  flex: 0 0 100%;[m
[31m-  max-width: 100%;[m
[31m-}[m
[31m-[m
[31m-.order-first {[m
[31m-  -ms-flex-order: -1;[m
[31m-  order: -1;[m
[31m-}[m
[31m-[m
[31m-.order-last {[m
[31m-  -ms-flex-order: 13;[m
[31m-  order: 13;[m
[31m-}[m
[31m-[m
[31m-.order-0 {[m
[31m-  -ms-flex-order: 0;[m
[31m-  order: 0;[m
[31m-}[m
[31m-[m
[31m-.order-1 {[m
[31m-  -ms-flex-order: 1;[m
[31m-  order: 1;[m
[31m-}[m
[31m-[m
[31m-.order-2 {[m
[31m-  -ms-flex-order: 2;[m
[31m-  order: 2;[m
[31m-}[m
[31m-[m
[31m-.order-3 {[m
[31m-  -ms-flex-order: 3;[m
[31m-  order: 3;[m
[31m-}[m
[31m-[m
[31m-.order-4 {[m
[31m-  -ms-flex-order: 4;[m
[31m-  order: 4;[m
[31m-}[m
[31m-[m
[31m-.order-5 {[m
[31m-  -ms-flex-order: 5;[m
[31m-  order: 5;[m
[31m-}[m
[31m-[m
[31m-.order-6 {[m
[31m-  -ms-flex-order: 6;[m
[31m-  order: 6;[m
[31m-}[m
[31m-[m
[31m-.order-7 {[m
[31m-  -ms-flex-order: 7;[m
[31m-  order: 7;[m
[31m-}[m
[31m-[m
[31m-.order-8 {[m
[31m-  -ms-flex-order: 8;[m
[31m-  order: 8;[m
[31m-}[m
[31m-[m
[31m-.order-9 {[m
[31m-  -ms-flex-order: 9;[m
[31m-  order: 9;[m
[31m-}[m
[31m-[m
[31m-.order-10 {[m
[31m-  -ms-flex-order: 10;[m
[31m-  order: 10;[m
[31m-}[m
[31m-[m
[31m-.order-11 {[m
[31m-  -ms-flex-order: 11;[m
[31m-  order: 11;[m
[31m-}[m
[31m-[m
[31m-.order-12 {[m
[31m-  -ms-flex-order: 12;[m
[31m-  order: 12;[m
[31m-}[m
[31m-[m
[31m-.offset-1 {[m
[31m-  margin-left: 8.333333%;[m
[31m-}[m
[31m-[m
[31m-.offset-2 {[m
[31m-  margin-left: 16.666667%;[m
[31m-}[m
[31m-[m
[31m-.offset-3 {[m
[31m-  margin-left: 25%;[m
[31m-}[m
[31m-[m
[31m-.offset-4 {[m
[31m-  margin-left: 33.333333%;[m
[31m-}[m
[31m-[m
[31m-.offset-5 {[m
[31m-  margin-left: 41.666667%;[m
[31m-}[m
[31m-[m
[31m-.offset-6 {[m
[31m-  margin-left: 50%;[m
[31m-}[m
[31m-[m
[31m-.offset-7 {[m
[31m-  margin-left: 58.333333%;[m
[31m-}[m
[31m-[m
[31m-.offset-8 {[m
[31m-  margin-left: 66.666667%;[m
[31m-}[m
[31m-[m
[31m-.offset-9 {[m
[31m-  margin-left: 75%;[m
[31m-}[m
[31m-[m
[31m-.offset-10 {[m
[31m-  margin-left: 83.333333%;[m
[31m-}[m
[31m-[m
[31m-.offset-11 {[m
[31m-  margin-left: 91.666667%;[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 576px) {[m
[31m-  .col-sm {[m
[31m-    -ms-flex-preferred-size: 0;[m
[31m-    flex-basis: 0;[m
[31m-    -ms-flex-positive: 1;[m
[31m-    flex-grow: 1;[m
[31m-    min-width: 0;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .row-cols-sm-1 > * {[m
[31m-    -ms-flex: 0 0 100%;[m
[31m-    flex: 0 0 100%;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .row-cols-sm-2 > * {[m
[31m-    -ms-flex: 0 0 50%;[m
[31m-    flex: 0 0 50%;[m
[31m-    max-width: 50%;[m
[31m-  }[m
[31m-  .row-cols-sm-3 > * {[m
[31m-    -ms-flex: 0 0 33.333333%;[m
[31m-    flex: 0 0 33.333333%;[m
[31m-    max-width: 33.333333%;[m
[31m-  }[m
[31m-  .row-cols-sm-4 > * {[m
[31m-    -ms-flex: 0 0 25%;[m
[31m-    flex: 0 0 25%;[m
[31m-    max-width: 25%;[m
[31m-  }[m
[31m-  .row-cols-sm-5 > * {[m
[31m-    -ms-flex: 0 0 20%;[m
[31m-    flex: 0 0 20%;[m
[31m-    max-width: 20%;[m
[31m-  }[m
[31m-  .row-cols-sm-6 > * {[m
[31m-    -ms-flex: 0 0 16.666667%;[m
[31m-    flex: 0 0 16.666667%;[m
[31m-    max-width: 16.666667%;[m
[31m-  }[m
[31m-  .col-sm-auto {[m
[31m-    -ms-flex: 0 0 auto;[m
[31m-    flex: 0 0 auto;[m
[31m-    width: auto;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .col-sm-1 {[m
[31m-    -ms-flex: 0 0 8.333333%;[m
[31m-    flex: 0 0 8.333333%;[m
[31m-    max-width: 8.333333%;[m
[31m-  }[m
[31m-  .col-sm-2 {[m
[31m-    -ms-flex: 0 0 16.666667%;[m
[31m-    flex: 0 0 16.666667%;[m
[31m-    max-width: 16.666667%;[m
[31m-  }[m
[31m-  .col-sm-3 {[m
[31m-    -ms-flex: 0 0 25%;[m
[31m-    flex: 0 0 25%;[m
[31m-    max-width: 25%;[m
[31m-  }[m
[31m-  .col-sm-4 {[m
[31m-    -ms-flex: 0 0 33.333333%;[m
[31m-    flex: 0 0 33.333333%;[m
[31m-    max-width: 33.333333%;[m
[31m-  }[m
[31m-  .col-sm-5 {[m
[31m-    -ms-flex: 0 0 41.666667%;[m
[31m-    flex: 0 0 41.666667%;[m
[31m-    max-width: 41.666667%;[m
[31m-  }[m
[31m-  .col-sm-6 {[m
[31m-    -ms-flex: 0 0 50%;[m
[31m-    flex: 0 0 50%;[m
[31m-    max-width: 50%;[m
[31m-  }[m
[31m-  .col-sm-7 {[m
[31m-    -ms-flex: 0 0 58.333333%;[m
[31m-    flex: 0 0 58.333333%;[m
[31m-    max-width: 58.333333%;[m
[31m-  }[m
[31m-  .col-sm-8 {[m
[31m-    -ms-flex: 0 0 66.666667%;[m
[31m-    flex: 0 0 66.666667%;[m
[31m-    max-width: 66.666667%;[m
[31m-  }[m
[31m-  .col-sm-9 {[m
[31m-    -ms-flex: 0 0 75%;[m
[31m-    flex: 0 0 75%;[m
[31m-    max-width: 75%;[m
[31m-  }[m
[31m-  .col-sm-10 {[m
[31m-    -ms-flex: 0 0 83.333333%;[m
[31m-    flex: 0 0 83.333333%;[m
[31m-    max-width: 83.333333%;[m
[31m-  }[m
[31m-  .col-sm-11 {[m
[31m-    -ms-flex: 0 0 91.666667%;[m
[31m-    flex: 0 0 91.666667%;[m
[31m-    max-width: 91.666667%;[m
[31m-  }[m
[31m-  .col-sm-12 {[m
[31m-    -ms-flex: 0 0 100%;[m
[31m-    flex: 0 0 100%;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .order-sm-first {[m
[31m-    -ms-flex-order: -1;[m
[31m-    order: -1;[m
[31m-  }[m
[31m-  .order-sm-last {[m
[31m-    -ms-flex-order: 13;[m
[31m-    order: 13;[m
[31m-  }[m
[31m-  .order-sm-0 {[m
[31m-    -ms-flex-order: 0;[m
[31m-    order: 0;[m
[31m-  }[m
[31m-  .order-sm-1 {[m
[31m-    -ms-flex-order: 1;[m
[31m-    order: 1;[m
[31m-  }[m
[31m-  .order-sm-2 {[m
[31m-    -ms-flex-order: 2;[m
[31m-    order: 2;[m
[31m-  }[m
[31m-  .order-sm-3 {[m
[31m-    -ms-flex-order: 3;[m
[31m-    order: 3;[m
[31m-  }[m
[31m-  .order-sm-4 {[m
[31m-    -ms-flex-order: 4;[m
[31m-    order: 4;[m
[31m-  }[m
[31m-  .order-sm-5 {[m
[31m-    -ms-flex-order: 5;[m
[31m-    order: 5;[m
[31m-  }[m
[31m-  .order-sm-6 {[m
[31m-    -ms-flex-order: 6;[m
[31m-    order: 6;[m
[31m-  }[m
[31m-  .order-sm-7 {[m
[31m-    -ms-flex-order: 7;[m
[31m-    order: 7;[m
[31m-  }[m
[31m-  .order-sm-8 {[m
[31m-    -ms-flex-order: 8;[m
[31m-    order: 8;[m
[31m-  }[m
[31m-  .order-sm-9 {[m
[31m-    -ms-flex-order: 9;[m
[31m-    order: 9;[m
[31m-  }[m
[31m-  .order-sm-10 {[m
[31m-    -ms-flex-order: 10;[m
[31m-    order: 10;[m
[31m-  }[m
[31m-  .order-sm-11 {[m
[31m-    -ms-flex-order: 11;[m
[31m-    order: 11;[m
[31m-  }[m
[31m-  .order-sm-12 {[m
[31m-    -ms-flex-order: 12;[m
[31m-    order: 12;[m
[31m-  }[m
[31m-  .offset-sm-0 {[m
[31m-    margin-left: 0;[m
[31m-  }[m
[31m-  .offset-sm-1 {[m
[31m-    margin-left: 8.333333%;[m
[31m-  }[m
[31m-  .offset-sm-2 {[m
[31m-    margin-left: 16.666667%;[m
[31m-  }[m
[31m-  .offset-sm-3 {[m
[31m-    margin-left: 25%;[m
[31m-  }[m
[31m-  .offset-sm-4 {[m
[31m-    margin-left: 33.333333%;[m
[31m-  }[m
[31m-  .offset-sm-5 {[m
[31m-    margin-left: 41.666667%;[m
[31m-  }[m
[31m-  .offset-sm-6 {[m
[31m-    margin-left: 50%;[m
[31m-  }[m
[31m-  .offset-sm-7 {[m
[31m-    margin-left: 58.333333%;[m
[31m-  }[m
[31m-  .offset-sm-8 {[m
[31m-    margin-left: 66.666667%;[m
[31m-  }[m
[31m-  .offset-sm-9 {[m
[31m-    margin-left: 75%;[m
[31m-  }[m
[31m-  .offset-sm-10 {[m
[31m-    margin-left: 83.333333%;[m
[31m-  }[m
[31m-  .offset-sm-11 {[m
[31m-    margin-left: 91.666667%;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 768px) {[m
[31m-  .col-md {[m
[31m-    -ms-flex-preferred-size: 0;[m
[31m-    flex-basis: 0;[m
[31m-    -ms-flex-positive: 1;[m
[31m-    flex-grow: 1;[m
[31m-    min-width: 0;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .row-cols-md-1 > * {[m
[31m-    -ms-flex: 0 0 100%;[m
[31m-    flex: 0 0 100%;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .row-cols-md-2 > * {[m
[31m-    -ms-flex: 0 0 50%;[m
[31m-    flex: 0 0 50%;[m
[31m-    max-width: 50%;[m
[31m-  }[m
[31m-  .row-cols-md-3 > * {[m
[31m-    -ms-flex: 0 0 33.333333%;[m
[31m-    flex: 0 0 33.333333%;[m
[31m-    max-width: 33.333333%;[m
[31m-  }[m
[31m-  .row-cols-md-4 > * {[m
[31m-    -ms-flex: 0 0 25%;[m
[31m-    flex: 0 0 25%;[m
[31m-    max-width: 25%;[m
[31m-  }[m
[31m-  .row-cols-md-5 > * {[m
[31m-    -ms-flex: 0 0 20%;[m
[31m-    flex: 0 0 20%;[m
[31m-    max-width: 20%;[m
[31m-  }[m
[31m-  .row-cols-md-6 > * {[m
[31m-    -ms-flex: 0 0 16.666667%;[m
[31m-    flex: 0 0 16.666667%;[m
[31m-    max-width: 16.666667%;[m
[31m-  }[m
[31m-  .col-md-auto {[m
[31m-    -ms-flex: 0 0 auto;[m
[31m-    flex: 0 0 auto;[m
[31m-    width: auto;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .col-md-1 {[m
[31m-    -ms-flex: 0 0 8.333333%;[m
[31m-    flex: 0 0 8.333333%;[m
[31m-    max-width: 8.333333%;[m
[31m-  }[m
[31m-  .col-md-2 {[m
[31m-    -ms-flex: 0 0 16.666667%;[m
[31m-    flex: 0 0 16.666667%;[m
[31m-    max-width: 16.666667%;[m
[31m-  }[m
[31m-  .col-md-3 {[m
[31m-    -ms-flex: 0 0 25%;[m
[31m-    flex: 0 0 25%;[m
[31m-    max-width: 25%;[m
[31m-  }[m
[31m-  .col-md-4 {[m
[31m-    -ms-flex: 0 0 33.333333%;[m
[31m-    flex: 0 0 33.333333%;[m
[31m-    max-width: 33.333333%;[m
[31m-  }[m
[31m-  .col-md-5 {[m
[31m-    -ms-flex: 0 0 41.666667%;[m
[31m-    flex: 0 0 41.666667%;[m
[31m-    max-width: 41.666667%;[m
[31m-  }[m
[31m-  .col-md-6 {[m
[31m-    -ms-flex: 0 0 50%;[m
[31m-    flex: 0 0 50%;[m
[31m-    max-width: 50%;[m
[31m-  }[m
[31m-  .col-md-7 {[m
[31m-    -ms-flex: 0 0 58.333333%;[m
[31m-    flex: 0 0 58.333333%;[m
[31m-    max-width: 58.333333%;[m
[31m-  }[m
[31m-  .col-md-8 {[m
[31m-    -ms-flex: 0 0 66.666667%;[m
[31m-    flex: 0 0 66.666667%;[m
[31m-    max-width: 66.666667%;[m
[31m-  }[m
[31m-  .col-md-9 {[m
[31m-    -ms-flex: 0 0 75%;[m
[31m-    flex: 0 0 75%;[m
[31m-    max-width: 75%;[m
[31m-  }[m
[31m-  .col-md-10 {[m
[31m-    -ms-flex: 0 0 83.333333%;[m
[31m-    flex: 0 0 83.333333%;[m
[31m-    max-width: 83.333333%;[m
[31m-  }[m
[31m-  .col-md-11 {[m
[31m-    -ms-flex: 0 0 91.666667%;[m
[31m-    flex: 0 0 91.666667%;[m
[31m-    max-width: 91.666667%;[m
[31m-  }[m
[31m-  .col-md-12 {[m
[31m-    -ms-flex: 0 0 100%;[m
[31m-    flex: 0 0 100%;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .order-md-first {[m
[31m-    -ms-flex-order: -1;[m
[31m-    order: -1;[m
[31m-  }[m
[31m-  .order-md-last {[m
[31m-    -ms-flex-order: 13;[m
[31m-    order: 13;[m
[31m-  }[m
[31m-  .order-md-0 {[m
[31m-    -ms-flex-order: 0;[m
[31m-    order: 0;[m
[31m-  }[m
[31m-  .order-md-1 {[m
[31m-    -ms-flex-order: 1;[m
[31m-    order: 1;[m
[31m-  }[m
[31m-  .order-md-2 {[m
[31m-    -ms-flex-order: 2;[m
[31m-    order: 2;[m
[31m-  }[m
[31m-  .order-md-3 {[m
[31m-    -ms-flex-order: 3;[m
[31m-    order: 3;[m
[31m-  }[m
[31m-  .order-md-4 {[m
[31m-    -ms-flex-order: 4;[m
[31m-    order: 4;[m
[31m-  }[m
[31m-  .order-md-5 {[m
[31m-    -ms-flex-order: 5;[m
[31m-    order: 5;[m
[31m-  }[m
[31m-  .order-md-6 {[m
[31m-    -ms-flex-order: 6;[m
[31m-    order: 6;[m
[31m-  }[m
[31m-  .order-md-7 {[m
[31m-    -ms-flex-order: 7;[m
[31m-    order: 7;[m
[31m-  }[m
[31m-  .order-md-8 {[m
[31m-    -ms-flex-order: 8;[m
[31m-    order: 8;[m
[31m-  }[m
[31m-  .order-md-9 {[m
[31m-    -ms-flex-order: 9;[m
[31m-    order: 9;[m
[31m-  }[m
[31m-  .order-md-10 {[m
[31m-    -ms-flex-order: 10;[m
[31m-    order: 10;[m
[31m-  }[m
[31m-  .order-md-11 {[m
[31m-    -ms-flex-order: 11;[m
[31m-    order: 11;[m
[31m-  }[m
[31m-  .order-md-12 {[m
[31m-    -ms-flex-order: 12;[m
[31m-    order: 12;[m
[31m-  }[m
[31m-  .offset-md-0 {[m
[31m-    margin-left: 0;[m
[31m-  }[m
[31m-  .offset-md-1 {[m
[31m-    margin-left: 8.333333%;[m
[31m-  }[m
[31m-  .offset-md-2 {[m
[31m-    margin-left: 16.666667%;[m
[31m-  }[m
[31m-  .offset-md-3 {[m
[31m-    margin-left: 25%;[m
[31m-  }[m
[31m-  .offset-md-4 {[m
[31m-    margin-left: 33.333333%;[m
[31m-  }[m
[31m-  .offset-md-5 {[m
[31m-    margin-left: 41.666667%;[m
[31m-  }[m
[31m-  .offset-md-6 {[m
[31m-    margin-left: 50%;[m
[31m-  }[m
[31m-  .offset-md-7 {[m
[31m-    margin-left: 58.333333%;[m
[31m-  }[m
[31m-  .offset-md-8 {[m
[31m-    margin-left: 66.666667%;[m
[31m-  }[m
[31m-  .offset-md-9 {[m
[31m-    margin-left: 75%;[m
[31m-  }[m
[31m-  .offset-md-10 {[m
[31m-    margin-left: 83.333333%;[m
[31m-  }[m
[31m-  .offset-md-11 {[m
[31m-    margin-left: 91.666667%;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media (min-width: 992px) {[m
[31m-  .col-lg {[m
[31m-    -ms-flex-preferred-size: 0;[m
[31m-    flex-basis: 0;[m
[31m-    -ms-flex-positive: 1;[m
[31m-    flex-grow: 1;[m
[31m-    min-width: 0;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .row-cols-lg-1 > * {[m
[31m-    -ms-flex: 0 0 100%;[m
[31m-    flex: 0 0 100%;[m
[31m-    max-width: 100%;[m
[31m-  }[m
[31m-  .row-cols-lg-2 > * {[m
[31m-    -ms-flex: 0 0 50%;[m
[31m-    flex: 0 0 50%;[m
[31m-    max-width: 50%;[m
[31m-  }[m
[31m-  .row-cols-lg-3 > * {[m
[31m-    -ms-flex: 0 0 33.333333%;[m
[31m-    flex: 0 0 33.333333%;[m
[31m-    max-width: 33.333333%;[m
[31m-  }[m
[31m-  .row-cols-lg-4 > * {[m
[31m-    -ms-flex: 0 0 25%;[m
[31m-    flex: 0 0 25%;[m
[31m-    max-width: 25%;[m
[31m-  }[m
[31m-  .row-col