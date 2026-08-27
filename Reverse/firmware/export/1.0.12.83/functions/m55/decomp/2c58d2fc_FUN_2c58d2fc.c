/* FUN_2c58d2fc @ 0x2c58d2fc */

undefined1 * FUN_2c58d2fc(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  
  if (param_1 == (char *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar6 = (uint)*param_1;
  if (uVar6 != 0) {
    uVar5 = uVar6;
    pcVar8 = param_1;
    iVar2 = 0;
    do {
      while( true ) {
        iVar7 = iVar2;
        if ((uVar5 & 0xf0) != 0xf0) break;
        pcVar8 = pcVar8 + 4;
        uVar5 = (uint)*pcVar8;
        iVar2 = iVar7 + 1;
        if (uVar5 == 0) goto LAB_2c58d352;
      }
      if ((uVar5 & 0xe0) == 0xe0) {
        iVar2 = 3;
      }
      else if ((uVar5 & 0xc0) == 0xc0) {
        iVar2 = 2;
      }
      else {
        iVar2 = 1;
      }
      pcVar8 = pcVar8 + iVar2;
      uVar5 = (uint)*pcVar8;
      iVar2 = iVar7 + 1;
    } while (uVar5 != 0);
LAB_2c58d352:
    iVar2 = 0;
    pcVar8 = param_1;
    if (0x16 < iVar7 + 1) {
      while( true ) {
        if ((uVar6 & 0xf0) == 0xf0) {
          pcVar8 = pcVar8 + 4;
          cVar1 = *pcVar8;
        }
        else {
          if ((uVar6 & 0xe0) == 0xe0) {
            iVar7 = 3;
          }
          else if ((uVar6 & 0xc0) == 0xc0) {
            iVar7 = 2;
          }
          else {
            iVar7 = 1;
          }
          pcVar8 = pcVar8 + iVar7;
          cVar1 = *pcVar8;
        }
        uVar6 = (uint)cVar1;
        if (uVar6 == 0) break;
        iVar2 = iVar2 + 1;
      }
      if (0x16 < iVar2 + 1) {
        param_1 = (char *)FUN_2c58d264(param_1,iVar2 + -0x15);
      }
      iVar2 = FUN_2c66c4ec(param_1);
      puVar3 = (undefined1 *)lv_mem_alloc(iVar2 + 4);
      if (puVar3 != (undefined1 *)0x0) {
        FUN_2c62c3b0(puVar3,iVar2 + 4);
        *puVar3 = 0x2e;
        puVar3[1] = 0x2e;
        puVar3[2] = 0x2e;
        uVar4 = FUN_2c66c4ec(param_1);
        FUN_2c62c0d8(puVar3 + 3,param_1,uVar4);
        return puVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c58d40c,0x4d,DAT_2c58d408,DAT_2c58d404);
    }
  }
  puVar3 = (undefined1 *)FUN_2c58d2b0(param_1);
  return puVar3;
}

