git config --global user.name "Piyush Tailor"
git config --global user.email piyushtailor4@gmail.com



The .gitignore file only applies to untracked files. If the folder you want to ignore has already been committed to your repository, you'll need to use the git rm --cached command to remove it from the staging area before adding it to the .gitignore file.

git reset  # D


