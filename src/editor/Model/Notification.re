open Oni_Core;
open Oni_Core.Types;

open Actions;

let lastId = ref(0);

type t = Actions.notification;

let create = (~message, ~title, ()) => {
  message,
  title,
};
