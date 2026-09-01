/* FUN_100ebeb8 @ 0x100ebeb8 */

undefined4 *
FUN_100ebeb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)FUN_10138fb6(2,0x14,DAT_100ebf70,param_4,param_4);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_100a5b78((DAT_100ebf74 - DAT_100ebf78) * 0x20 & 0xff00U | 0xec0031,DAT_100ebf80,DAT_100ebf7c
                );
  }
  else {
    iVar4 = FUN_10138fd6(0,*DAT_100ebf84,param_2,DAT_100ebf70);
    puVar3[3] = iVar4;
    puVar1 = DAT_100ebf88;
    if (iVar4 == 0) {
      iVar4 = FUN_100eaeac(*DAT_100ebf88,DAT_100ebf70);
      puVar3[3] = iVar4;
      if (iVar4 == 0) {
        FUN_100a5b78((DAT_100ebf74 - DAT_100ebf78) * 0x20 & 0xff00U | 0x1000031,DAT_100ebf80,
                     DAT_100ebf8c,param_1);
        FUN_10138fbc(puVar3);
        FUN_100ebda8();
        return (undefined4 *)0x0;
      }
      *DAT_100ebf90 = *DAT_100ebf90 + 1;
      puVar3[1] = *puVar1;
    }
    else {
      puVar3[1] = param_2;
    }
    *(undefined4 *)(puVar3[3] + 0x24) = 0;
    piVar2 = DAT_100ebf94;
    puVar3[2] = 0;
    puVar3[4] = 0;
    iVar4 = *piVar2;
    *puVar3 = param_1;
    if (iVar4 == 0) {
      *piVar2 = (int)puVar3;
    }
    else {
      do {
        iVar5 = iVar4;
        iVar4 = *(int *)(iVar5 + 0x10);
      } while (iVar4 != 0);
      *(undefined4 **)(iVar5 + 0x10) = puVar3;
    }
  }
  return puVar3;
}

