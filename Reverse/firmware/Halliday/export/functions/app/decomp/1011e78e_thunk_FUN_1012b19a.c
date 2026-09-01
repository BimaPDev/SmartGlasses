/* thunk_FUN_1012b19a @ 0x1011e78e */

int thunk_FUN_1012b19a(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_3 < param_2) {
    if (param_1 <= param_3) {
      return param_5;
    }
    if (param_2 <= param_1) {
      return param_4;
    }
  }
  else {
    if (param_3 <= param_1) {
      return param_5;
    }
    if (param_1 <= param_2) {
      return param_4;
    }
    if (param_3 == param_2) {
      return param_5;
    }
  }
  return ((param_1 - param_2) * (param_5 - param_4)) / (param_3 - param_2) + param_4;
}

