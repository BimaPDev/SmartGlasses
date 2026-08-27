/* FUN_140889ac @ 0x140889ac */

void FUN_140889ac(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  
  local_14 = *DAT_14088a28;
  local_20 = *DAT_14088a2c;
  local_1c = DAT_14088a2c[1];
  local_18 = (undefined2)DAT_14088a2c[2];
  if (param_1 == 0) {
    uVar3 = 0xff;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x22);
    uVar3 = 0;
    if (cVar1 != '\0') {
      local_20 = *(undefined4 *)(param_1 + 0x10);
      local_18 = CONCAT11(cVar1,(char)DAT_14088a2c[2]);
      uVar2 = (uint)local_1c >> 0x10;
      local_1c = CONCAT22((short)uVar2,(short)*(undefined4 *)(param_1 + 0x14));
      if (param_2 == 0) {
        FUN_1408755c((undefined4 *)(param_1 + 0x10),0xd);
      }
      else if (cVar1 == '\x02') {
        FUN_14088870(param_1,&local_20);
      }
      *(undefined1 *)(param_1 + 0x22) = 0;
      if (*DAT_14088a28 == local_14) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_14088a30,param_1,uVar3);
}

