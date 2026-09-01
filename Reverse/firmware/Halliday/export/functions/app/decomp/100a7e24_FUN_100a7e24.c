/* FUN_100a7e24 @ 0x100a7e24 */

undefined4 FUN_100a7e24(undefined1 param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_100a7e60;
  if (*DAT_100a7e60 == 0) {
    uVar3 = 0xfffffffd;
  }
  else {
    uVar2 = FUN_100a7dfc();
    uVar3 = FUN_100a72cc(param_1);
    if ((**(char **)(*piVar1 + 0x14) == '\x04') || (**(char **)(*piVar1 + 0x14) == '\x18')) {
      uVar3 = FUN_100a72cc(4,uVar2);
      return uVar3;
    }
  }
  return uVar3;
}

