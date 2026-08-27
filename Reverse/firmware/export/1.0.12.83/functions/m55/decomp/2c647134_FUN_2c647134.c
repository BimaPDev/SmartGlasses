/* FUN_2c647134 @ 0x2c647134 */

ulonglong FUN_2c647134(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  ushort *puVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (ushort *)(param_1 + 0xc);
    do {
      ExclusiveAccess(puVar4);
      uVar1 = *puVar4;
      if (uVar1 == 0) {
        ClearExclusiveLocal();
        goto LAB_2c647156;
      }
      param_2 = uVar1 - 1;
      bVar2 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar2);
    *puVar4 = (ushort)param_2;
LAB_2c647156:
    if (uVar1 != 0) {
      uVar3 = FUN_2c645b54();
      FUN_2c64621c(uVar3,0);
      return (ulonglong)CONCAT24(*(undefined2 *)(param_1 + 0xc),param_1);
    }
  }
  return CONCAT44(param_2,param_1);
}

