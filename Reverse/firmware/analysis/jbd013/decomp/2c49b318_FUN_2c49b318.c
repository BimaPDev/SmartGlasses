/* FUN_2c49b318 @ 0x2c49b318 */

int FUN_2c49b318(undefined1 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_19;
  
  piVar1 = DAT_2c49b358;
  iVar3 = 3;
  local_19 = param_1;
  do {
    iVar2 = FUN_2c4bd450(*(undefined1 *)(*piVar1 + 4),*(undefined2 *)(*piVar1 + 6),&local_19,1,
                         param_2,1);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_2c6444fc(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

