/* FUN_100871bc @ 0x100871bc */

undefined4 FUN_100871bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\r') {
    uVar1 = 0;
    if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
      uVar1 = **(undefined4 **)(param_1 + 0x10);
    }
  }
  else {
    FUN_10094174(2,DAT_100871f0,0x154,DAT_100871ec,DAT_100871e8,param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

