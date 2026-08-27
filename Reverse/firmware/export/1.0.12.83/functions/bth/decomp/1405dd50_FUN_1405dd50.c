/* FUN_1405dd50 @ 0x1405dd50 */

void FUN_1405dd50(undefined2 param_1,undefined1 param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  
  if (param_4 == 0) {
    sVar4 = 0x1c;
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_4 + 4);
    sVar4 = sVar5 + 0x1c;
  }
  puVar3 = (undefined1 *)FUN_14074378(0xd67,param_1,4,sVar4);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = param_2;
    puVar3[1] = *param_3;
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_3 + 1);
    uVar1 = param_3[7];
    *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(param_3 + 5);
    puVar3[8] = uVar1;
    *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(param_3 + 8);
    uVar2 = *(undefined2 *)(param_3 + 0xc);
    puVar3[0xf] = param_3[0xe];
    *(undefined2 *)(puVar3 + 0xd) = uVar2;
    puVar3[0x10] = param_3[0xf];
    puVar3[0x11] = param_3[0x10];
    puVar3[0x12] = param_3[0x11];
    puVar3[0x13] = param_3[0x12];
    puVar3[0x14] = param_3[0x13];
    uVar2 = *(undefined2 *)(param_3 + 0x14);
    *(short *)(puVar3 + 0x18) = sVar5;
    *(undefined2 *)(puVar3 + 0x16) = uVar2;
    if (param_4 != 0) {
      param_4 = param_4 + *(ushort *)(param_4 + 6) + 0x30;
    }
    FUN_140e5278(puVar3 + 0x1a,param_4,sVar5);
    FUN_140743d0(puVar3);
    return;
  }
  return;
}

