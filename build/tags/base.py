import os
import sys
from pathlib import Path

parent_dir = Path(__file__).resolve().parent.parent
sys.path.append(str(parent_dir))
sys.path.append(os.path.join(parent_dir, "data", "tags"))
sys.path.append(os.path.join(parent_dir, "data", "tags", "values"))

from prebuild import Prebuild
import targets
from lang import Lang
from type import Type
from element import Element

if __name__ == "__main__":
    element = Element()
    element.set_is_mother(True)
    element.set_generate_name("base")
    element.add_text(Lang.languages["EN"]["code"], "base")
    element.add_text(Lang.languages["FA"]["code"], "پایه")

    element.add_attribute().set_generate_name("href").set_type(Type.Url).add_text(
        Lang.languages["EN"]["code"], "source"
    ).add_text(Lang.languages["FA"]["code"], "منبع").set_is_required(True)
    element.add_attribute().set_generate_name("target").set_type(Type.Boolean).add_text(
        Lang.languages["EN"]["code"], "target"
    ).add_text(Lang.languages["FA"]["code"], "نوع").add_reserve_values(targets.targets)

    element_dict = element.to_dict()

    element_str = Prebuild.to_string(element_dict)
    Prebuild.print(element_str)
    Prebuild.save(element_str, __file__)
