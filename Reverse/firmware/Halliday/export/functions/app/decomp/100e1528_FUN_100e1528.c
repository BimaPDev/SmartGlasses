/* FUN_100e1528 @ 0x100e1528 */

void FUN_100e1528(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = FUN_1013401c(DAT_100e1590,0,0xffffffff,0xffffffff);
  puVar4 = (undefined1 *)FUN_100c1fe4(iVar3 + 8,4);
  *puVar4 = 4;
  uVar2 = FUN_100e13b8();
  puVar4[1] = uVar2;
  puVar5 = (undefined4 *)FUN_100c1fe4(iVar3 + 8);
  *puVar5 = 0;
  sVar1 = *(short *)(param_1 + 0x52);
  *(undefined2 *)puVar5 = *(undefined2 *)(param_1 + 0x54);
  if (sVar1 != 0x2a0) {
    FUN_101381e4(iVar3);
  }
  *(short *)(puVar4 + 2) = *(short *)(iVar3 + 0xc) + -4;
  FUN_10138156(param_1,iVar3,4000,0);
  return;
}

