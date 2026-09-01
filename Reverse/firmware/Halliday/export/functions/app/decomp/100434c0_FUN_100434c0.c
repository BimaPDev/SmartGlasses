/* FUN_100434c0 @ 0x100434c0 */

void FUN_100434c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined2 local_1a;
  int local_14;
  
  local_14 = *DAT_10043534;
  FUN_1004337c(&local_20,param_2,param_3,0);
  FUN_101221f0(&local_20,param_1);
  FUN_100a5b78((DAT_1004353c - DAT_10043538) * 0x20 & 0xff00U | 0x310037,DAT_10043544,DAT_10043540,
               *param_1,local_1a,local_1c,local_1d,local_1e,local_1f,local_20);
  if (*DAT_10043534 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

