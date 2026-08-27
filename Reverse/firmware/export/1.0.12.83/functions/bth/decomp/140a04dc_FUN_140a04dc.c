/* FUN_140a04dc @ 0x140a04dc */

void FUN_140a04dc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_140a0520;
  uVar2 = FUN_1403a144(DAT_140a0520,0x1000,4,1);
  if (-1 < param_1 << 0x1f) {
    *DAT_140a0524 = 0xffffffff;
    enableIRQinterrupts();
  }
  FUN_1402a6e8(4,0x2b2,DAT_140a0530,DAT_140a052c,DAT_140a0528,uVar1,0x1000,uVar2);
  return;
}

