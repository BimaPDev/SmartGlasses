/* FUN_100d049c @ 0x100d049c */

void FUN_100d049c(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *local_1c [3];
  
  FUN_100a5b78(DAT_100d04cc | (DAT_100d04c8 - DAT_100d04c4) * 0x20 & 0xff00U,DAT_100d04d4,
               DAT_100d04d0);
  puVar3 = *(undefined4 **)(param_1 + -0x100);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_10134e08(puVar3 + 10,param_1 + 0x34);
    uVar2 = extraout_r1;
    while( true ) {
      uVar5 = FUN_100c1b58(param_1 + -0x20,uVar2,0,0);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      iVar1 = (int)uVar5;
      if (iVar1 == 0) break;
      FUN_100c1c90(iVar1,uVar2,iVar1);
      uVar2 = extraout_r1_01;
    }
    if (*(int *)(param_1 + -0x24) != 0) {
      FUN_100d028c(param_1 + -0x100,0,0,0xe);
      uVar2 = extraout_r1_00;
    }
    *(undefined4 *)(param_1 + -0x100) = 0;
    local_1c[0] = puVar3;
    if (puVar3[10] == 0) {
      while (iVar1 = FUN_100c1b58(local_1c[0] + 3,uVar2,0,0), iVar1 != 0) {
        FUN_100c1c90();
        uVar2 = extraout_r1_02;
      }
      puVar3 = (undefined4 *)local_1c[0][1];
      *local_1c[0] = 0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*puVar3;
        while( true ) {
          if ((code *)puVar3[1] != (code *)0x0) {
            (*(code *)puVar3[1])(0,0xe,0,0,puVar3[6]);
          }
          FUN_100d0268(puVar3);
          if (puVar4 == (undefined4 *)0x0) break;
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      FUN_1013c6ba(DAT_100d0498,local_1c);
      FUN_100cf134(*(undefined4 *)(param_1 + -0xf8));
    }
  }
  return;
}

