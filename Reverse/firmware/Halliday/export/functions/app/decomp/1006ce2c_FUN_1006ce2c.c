/* FUN_1006ce2c @ 0x1006ce2c */

undefined4 FUN_1006ce2c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)**(undefined4 **)(param_1 + 4);
  uVar3 = *puVar4;
  if (param_2 == 0) {
    if (1 < param_3) {
      return 0xffffffea;
    }
    uVar3 = uVar3 & 0xfcfaf3ff | param_3 << 0x18;
    if (param_3 == 1) {
      uVar3 = uVar3 | 0x10000;
    }
  }
  else {
    if (1 < param_3) {
      return 0xffffffea;
    }
    do {
      pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x30);
      if (pcVar2 == (code *)0x0) break;
      iVar1 = (*pcVar2)(param_1);
    } while (iVar1 == 0);
    uVar3 = DAT_1006ce88 & uVar3 | param_3 << 0x1a;
    if (param_3 == 1) {
      uVar3 = uVar3 | 0x20200;
    }
  }
  *puVar4 = uVar3;
  return 0;
}

