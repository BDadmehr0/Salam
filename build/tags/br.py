import os
import sys
from pathlib import Path

parent_dir = Path(__file__).resolve().parent.parent
sys.path.append(str(parent_dir))
sys.path.append(os.path.join(parent_dir, "data", "tags"))
sys.path.append(os.path.join(parent_dir, "data", "tags", "values"))

from lang import Lang
from prebuild import Prebuild
from element import Element

if __name__ == "__main__":
    element = Element()
    element.set_is_mother(False)
    element.set_generate_name("br")
    element.add_text(Lang.EN, "line")
    element.add_text(Lang.FA, "خط")

    element_dict = element.to_dict()

    element_str = Prebuild.to_string(element_dict)
    Prebuild.print(element_str)
    Prebuild.save(element_str, __file__)
