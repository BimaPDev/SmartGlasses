/* FUN_140b20d4 @ 0x140b20d4 */

void FUN_140b20d4(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  
  puVar3 = (undefined1 *)FUN_14053dc8(2);
  if ((puVar3 != (undefined1 *)0x0) && (puVar3[1] != -1)) {
    puVar4 = (undefined2 *)FUN_14074378(0xb00,2,0,param_2 + 0x10);
    *puVar4 = 0x309;
    puVar4[1] = 0x940f;
    *(undefined1 *)(puVar4 + 2) = *puVar3;
    uVar1 = puVar3[1];
    *(undefined1 *)(puVar4 + 3) = 1;
    *(undefined1 *)((int)puVar4 + 5) = uVar1;
    uVar2 = *(undefined2 *)(puVar3 + 0x44);
    puVar4[5] = 0;
    puVar4[4] = uVar2;
    puVar4[6] = (short)param_2;
    if (param_2 == 0) {
      FUN_140743d0(puVar4);
      return;
    }
    FUN_140e5278(puVar4 + 7,param_1,param_2);
    FUN_140743d0(puVar4);
    return;
  }
  FUN_1402a6e8(4,0xca,DAT_140b2174,DAT_140b2170,DAT_140b216c,DAT_140b2168);
  return;
}

