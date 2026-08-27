/* FUN_140561ac @ 0x140561ac */

void FUN_140561ac(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 *param_5,undefined2 *param_6,undefined1 param_7)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)FUN_14074378(0xe02,param_2,3,0x14);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = (char)param_1;
    uVar1 = FUN_1405c2b0(param_1);
    *(undefined2 *)(puVar2 + 2) = uVar1;
    puVar2[0xb] = *(undefined1 *)((int)param_5 + 6);
    *(undefined4 *)(puVar2 + 0xc) = *param_5;
    *(undefined2 *)(puVar2 + 0x10) = *(undefined2 *)(param_5 + 1);
    *(undefined2 *)(puVar2 + 4) = *param_6;
    *(undefined2 *)(puVar2 + 6) = param_6[1];
    uVar1 = param_6[2];
    puVar2[10] = param_7;
    *(undefined2 *)(puVar2 + 8) = uVar1;
    puVar2[0x12] = param_4;
    FUN_140743d0(puVar2);
    return;
  }
  return;
}

