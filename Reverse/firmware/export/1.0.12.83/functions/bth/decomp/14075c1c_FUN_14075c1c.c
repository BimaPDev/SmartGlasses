/* FUN_14075c1c @ 0x14075c1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075c1c(uint param_1)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_2c [8];
  uint local_24;
  uint local_c;
  
  local_c = *FUN_14075c6e;
  FUN_140e5658(auStack_2c,0,0x20,0);
  uVar4 = FUN_14075aec(param_1 & 0xffff);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar1 = 0;
  if ((int)uVar4 != 0) {
    puVar3 = puRam14075c74;
    if (0x7f < (int)param_1) {
      puVar3 = puRam14075c78;
    }
    FUN_140a2bac(*puVar3,auStack_2c);
    uVar1 = local_24 / (param_1 + 8);
    uVar2 = extraout_r1;
  }
  if ((*FUN_14075c6e ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,uVar2,*FUN_14075c6e ^ local_c,0);
}

