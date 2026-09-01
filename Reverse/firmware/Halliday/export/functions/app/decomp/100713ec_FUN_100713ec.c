/* FUN_100713ec @ 0x100713ec */

void FUN_100713ec(undefined2 param_1,int param_2,undefined4 param_3,int param_4,ushort param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  
  FUN_10114a38();
  puVar1 = DAT_10071460;
  uVar2 = DAT_10071460[0x1a];
  DAT_10071460[0x16] = param_2;
  puVar1[0x17] = param_3;
  *(undefined2 *)(puVar1 + 0x15) = param_1;
  *(undefined2 *)((int)puVar1 + 0x56) = 0;
  FUN_10070e48(uVar2);
  if (param_2 == 0) {
    sVar6 = 1;
    uVar4 = 0;
    do {
      uVar5 = param_5 - uVar4;
      if (0xf < (int)uVar5) {
        uVar5 = 0x10;
      }
      iVar3 = param_4 + uVar4;
      *(short *)((int)puVar1 + 0x56) = sVar6;
      *(undefined2 *)(puVar1 + 0x15) = param_1;
      uVar4 = uVar4 + uVar5 & 0xffff;
      FUN_1013d03e(puVar1 + 0x16,iVar3,uVar5 & 0xffff,0x40);
      FUN_10070e48(puVar1[0x1a]);
      sVar6 = sVar6 + 1;
    } while (uVar4 < param_5);
  }
  FUN_1011f5fc(*puVar1);
  FUN_101150e0();
  return;
}

