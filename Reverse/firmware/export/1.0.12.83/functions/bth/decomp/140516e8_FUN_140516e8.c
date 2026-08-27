/* FUN_140516e8 @ 0x140516e8 */

void FUN_140516e8(uint param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 local_1c;
  byte local_1b;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(DAT_1405175c + 0x123);
  uVar2 = (uint)bVar1;
  local_14 = *DAT_14051760;
  if (uVar2 == param_1) {
    *(undefined1 *)(DAT_1405175c + 0x123) = 0xff;
    FUN_1409dc10(param_1,1,4);
    FUN_1409d518(uVar2,4);
    local_1c = 1;
    local_18 = 0x39;
    local_1b = bVar1;
    FUN_1409e6bc(1,&local_1c);
  }
  else {
    FUN_1402a6e8(4,0x2e4,DAT_1405176c,DAT_14051768,DAT_14051764,param_1,uVar2);
  }
  if (*DAT_14051760 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

