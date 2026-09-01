/* FUN_1008d20c @ 0x1008d20c */

void FUN_1008d20c(int param_1)

{
  undefined4 uVar1;
  
  FUN_1011ea48(param_1,0,0x4c);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  uVar1 = DAT_1008d248;
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined1 *)(param_1 + 0x34) = 0xff;
  *(undefined1 *)(param_1 + 0x48) = 0xff;
  *(undefined1 *)(param_1 + 0x10) = 2;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined1 *)(param_1 + 0x1e) = 0xff;
  *(undefined2 *)(param_1 + 0x28) = 0x1eff;
  return;
}

