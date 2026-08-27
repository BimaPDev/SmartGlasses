/* FUN_2c13608c @ 0x2c13608c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13608c(uint param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uStack_38;
  
  pcVar2 = _DAT_2c13619c;
  param_1 = param_1 & 0xfffffffc;
  if (_DAT_2c136180 + param_1 <= _DAT_2c136184) {
    if ((*_DAT_2c13619c != '\0') && (FUN_2c1351d0(_DAT_2c136188,1), *pcVar2 != '\0')) {
      FUN_2c1351d0(_DAT_2c13618c,0x14);
    }
    puVar1 = _DAT_2c136190;
    if (*(char *)(_DAT_2c136190 + 10) != '\0') {
      iVar7 = 0;
      puVar8 = _DAT_2c136190;
      do {
        (*(code *)*puVar8)(9,0);
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(puVar1 + 10));
    }
    uVar3 = _DAT_2c1361a0;
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar7 = 0;
      uVar6 = _DAT_2c136194 - param_1;
      uStack_38 = 0;
      do {
        iVar4 = func_0x2c135530(*(undefined4 *)(param_1 + iVar7 * 4));
        if (iVar4 != 0) {
          uVar5 = FUN_2c135620(uVar3,100,_DAT_2c136198,iVar4);
          if (*pcVar2 != '\0') {
            FUN_2c1351d0(uVar3,uVar5);
          }
          if (*(char *)(puVar1 + 10) != '\0') {
            iVar4 = 0;
            puVar8 = _DAT_2c136190;
            do {
              (*(code *)*puVar8)(10,uVar3,uVar5);
              iVar4 = iVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar4 < (int)(uint)*(byte *)(puVar1 + 10));
          }
          uStack_38 = uStack_38 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (((param_2 != iVar7) && (uStack_38 < param_3)) && ((uVar6 >> 2) + 1 != iVar7));
    }
  }
  return;
}

