/* FUN_1405eb38 @ 0x1405eb38 */

void FUN_1405eb38(undefined2 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_14074378(0xd3c,param_1,4,0x40);
    if (puVar2 == (undefined4 *)0x0) {
      param_2 = 0x4b;
    }
    else {
      uVar5 = param_3[1];
      uVar4 = param_3[2];
      uVar3 = param_3[3];
      *puVar2 = *param_3;
      puVar2[1] = uVar5;
      puVar2[2] = uVar4;
      puVar2[3] = uVar3;
      uVar5 = param_3[5];
      uVar4 = param_3[6];
      uVar3 = param_3[7];
      puVar2[4] = param_3[4];
      puVar2[5] = uVar5;
      puVar2[6] = uVar4;
      puVar2[7] = uVar3;
      uVar5 = param_3[9];
      uVar4 = param_3[10];
      uVar3 = param_3[0xb];
      puVar2[8] = param_3[8];
      puVar2[9] = uVar5;
      puVar2[10] = uVar4;
      puVar2[0xb] = uVar3;
      uVar5 = param_3[0xd];
      uVar4 = param_3[0xe];
      uVar3 = param_3[0xf];
      puVar2[0xc] = param_3[0xc];
      puVar2[0xd] = uVar5;
      puVar2[0xe] = uVar4;
      puVar2[0xf] = uVar3;
      FUN_140743d0(puVar2,param_1);
    }
  }
  puVar1 = (undefined1 *)FUN_14074378(0xd00,param_1,4,6);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *(short *)(puVar1 + 2) = (short)param_2;
  *puVar1 = 0x35;
  puVar1[4] = 0xff;
  FUN_140743d0();
  return;
}

