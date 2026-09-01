/* FUN_100b55f4 @ 0x100b55f4 */

undefined4 * FUN_100b55f4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = (DAT_100b56b8 - DAT_100b56b4) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100b56bc | uVar5,DAT_100b56c4,DAT_100b56c0);
  puVar2 = (undefined4 *)thunk_FUN_1009f30c(0x48,DAT_100b56c8);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100a5b78(DAT_100b56cc | uVar5,DAT_100b56c4,DAT_100b56d0);
  }
  else {
    FUN_1011ea48(puVar2,0,0x48);
    local_3b = 0;
    local_39 = 0;
    local_44 = *param_2;
    local_40 = param_2[1];
    local_3c = *(undefined1 *)(param_2 + 2);
    local_38 = param_2[3];
    local_34 = param_2[4];
    local_30 = param_2[5];
    local_2c = param_2[6];
    local_28 = DAT_100b56d4;
    local_24 = param_2[7];
    local_20 = param_2[8];
    local_1c = 0x1004;
    iVar3 = FUN_100bfd64(&local_44);
    puVar2[0xc] = iVar3;
    if (iVar3 == 0) {
      FUN_100a5b78(DAT_100b56d8 | uVar5,DAT_100b56c4,DAT_100b56dc);
    }
    uVar4 = thunk_FUN_1009f30c(0x80,DAT_100b56c8);
    puVar2[4] = 0x80;
    *(undefined2 *)((int)puVar2 + 0x2e) = 0x100;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar1 = DAT_100b56e0;
    puVar2[5] = uVar4;
    *puVar1 = puVar2;
    puVar2[1] = 2;
    uVar4 = DAT_100b56e4;
    puVar2[2] = param_1;
    *puVar2 = uVar4;
  }
  return puVar2;
}

