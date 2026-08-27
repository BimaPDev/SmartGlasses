/* FUN_1405e5fc @ 0x1405e5fc */

void FUN_1405e5fc(undefined2 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_14074378(0xd3a,param_1,4,0x20);
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
      FUN_140743d0(puVar2,param_1);
    }
  }
  puVar1 = (undefined1 *)FUN_14074378(0xd00,param_1,4,6);
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *(short *)(puVar1 + 2) = (short)param_2;
  *puVar1 = 0x34;
  puVar1[4] = 0xff;
  FUN_140743d0();
  return;
}

