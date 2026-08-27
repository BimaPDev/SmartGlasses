/* FUN_2c4e6404 @ 0x2c4e6404 */

undefined1 * FUN_2c4e6404(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  FUN_2c6741e8(0x44,DAT_2c4e6514,param_1,param_2,1,param_3);
  puVar2 = (undefined1 *)FUN_2c4c32b8(0x18);
  *puVar2 = (char)param_3;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(undefined4 *)(puVar2 + 8) = 1;
  switch(param_3) {
  case 0:
    uVar3 = FUN_2c4e5df0(16000,param_1 << 1,1,DAT_2c4e6520);
    uVar1 = DAT_2c4e6524;
    *(undefined4 *)(puVar2 + 0x10) = uVar3;
    *(undefined4 *)(puVar2 + 0x14) = uVar1;
    *(undefined4 *)(puVar2 + 0xc) = 2;
    return puVar2;
  case 1:
    uVar3 = FUN_2c4e5df0(48000,param_1 * 3,1,DAT_2c4e6528);
    uVar1 = DAT_2c4e6524;
    *(undefined4 *)(puVar2 + 0x10) = uVar3;
    *(undefined4 *)(puVar2 + 0x14) = uVar1;
    *(undefined4 *)(puVar2 + 0xc) = 3;
    return puVar2;
  case 2:
    uVar3 = FUN_2c4e5df0(48000,param_1 * 6,1,DAT_2c4e6518);
    uVar1 = DAT_2c4e6524;
    *(undefined4 *)(puVar2 + 0x10) = uVar3;
    *(undefined4 *)(puVar2 + 0x14) = uVar1;
    *(undefined4 *)(puVar2 + 0xc) = 6;
    return puVar2;
  case 3:
    uVar3 = FUN_2c4e5df0(16000,param_1,1,DAT_2c4e6520);
    uVar1 = DAT_2c4e651c;
    *(undefined4 *)(puVar2 + 0x10) = uVar3;
    *(undefined4 *)(puVar2 + 0x14) = uVar1;
    *(undefined4 *)(puVar2 + 0xc) = 2;
    return puVar2;
  case 4:
    uVar3 = FUN_2c4e5df0(48000,param_1,1,DAT_2c4e6528);
    uVar1 = DAT_2c4e651c;
    *(undefined4 *)(puVar2 + 0x10) = uVar3;
    *(undefined4 *)(puVar2 + 0x14) = uVar1;
    *(undefined4 *)(puVar2 + 0xc) = 3;
    return puVar2;
  case 5:
    uVar3 = FUN_2c4e5df0(48000,param_1,1,DAT_2c4e6518);
    uVar1 = DAT_2c4e651c;
    *(undefined4 *)(puVar2 + 0x10) = uVar3;
    *(undefined4 *)(puVar2 + 0x14) = uVar1;
    *(undefined4 *)(puVar2 + 0xc) = 6;
    return puVar2;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4e652c);
  }
}

