/* FUN_1405ea58 @ 0x1405ea58 */

void FUN_1405ea58(int param_1,undefined4 param_2,undefined2 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)FUN_14074378(0xd31,param_3,4,0x16);
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      *puVar2 = *param_4;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_4 + 1);
      uVar6 = param_5[1];
      uVar5 = param_5[2];
      uVar3 = param_5[3];
      *(undefined4 *)((int)puVar2 + 6) = *param_5;
      *(undefined4 *)((int)puVar2 + 10) = uVar6;
      *(undefined4 *)((int)puVar2 + 0xe) = uVar5;
      *(undefined4 *)((int)puVar2 + 0x12) = uVar3;
      FUN_140743d0(puVar2,param_3);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x47;
  }
  puVar1 = (undefined1 *)FUN_14074378(0xd00,param_3,4,6);
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = uVar4;
    *puVar1 = 0x30;
    puVar1[4] = 0xff;
    FUN_140743d0();
    return;
  }
  return;
}

