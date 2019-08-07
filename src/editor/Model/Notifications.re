open Oni_Core;
open Oni_Core.Types;

open Actions;

type t = list(Notification.t);

let default: t = [];

let reduce = (state: t, action: Actions.t) => {
  switch (action) {
  | ShowNotification(n) => [n, ...state]
  | _ => state
  }
};


