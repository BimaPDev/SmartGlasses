/* FUN_2c4875d0 @ 0x2c4875d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4875d0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  puVar2 = _LAB_2c4877d0;
  uVar6 = FUN_2c644044(*_LAB_2c4877d0,0xffffffff);
  puVar5 = _LAB_2c487800;
  piVar4 = _LAB_2c4877e8;
  pcVar3 = _LAB_2c4877e4;
  if ((*_LAB_2c4877d4 == '\0') && (param_1 - 1U < 0xf)) {
    uVar10 = *_LAB_2c487800;
    uVar11 = uVar10 + param_3;
    if (uVar11 < 0x2800) {
      if (param_1 == 1) {
        if (*_LAB_2c4877dc == '0') {
          uVar10 = 0x34;
          iVar9 = *_LAB_2c4877d8;
          iVar8 = iVar9 + 0x34;
          *_LAB_2c4877dc = '1';
          FUN_2c674268(iVar8,0,0x27cc);
        }
        else {
          iVar9 = *_LAB_2c4877d8;
          iVar8 = iVar9 + uVar10;
        }
        uVar6 = FUN_2c66c4ec(_LAB_2c4877e0);
        FUN_2c674668(iVar8,_LAB_2c4877e0,uVar6);
        iVar8 = FUN_2c66c4ec(_LAB_2c4877e0);
        uVar10 = iVar8 + uVar10;
        *puVar5 = uVar10;
        if ((param_2 != 0) && (param_3 != 0)) {
          FUN_2c674668(iVar9 + uVar10,param_2,param_3);
          *puVar5 = uVar10 + param_3;
          *(undefined1 *)(iVar9 + uVar10 + param_3) = 10;
        }
      }
      else if (param_1 == 2) {
        if (*_LAB_2c4877e4 != '\0') {
          uVar6 = FUN_2c66c4ec(_LAB_2c4877ec);
          FUN_2c674668(*_LAB_2c4877d8 + uVar10,_LAB_2c4877ec,uVar6);
          iVar8 = FUN_2c66c4ec(_LAB_2c4877ec);
          *pcVar3 = '\0';
          *puVar5 = iVar8 + uVar10;
        }
        if ((param_2 != 0) && (param_3 != 0)) {
          iVar8 = *_LAB_2c4877d8;
          uVar10 = *puVar5 + param_3;
          FUN_2c674668(iVar8 + *puVar5,param_2,param_3);
          *puVar5 = uVar10;
          *(undefined1 *)(iVar8 + uVar10 + -1) = 10;
        }
      }
      else if (param_1 == 3) {
        uVar6 = FUN_2c66c4ec(_LAB_2c4877f0);
        FUN_2c674668(*_LAB_2c4877d8 + uVar10,_LAB_2c4877f0,uVar6);
        iVar8 = FUN_2c66c4ec(_LAB_2c4877f0);
        *puVar5 = iVar8 + uVar10;
      }
      else if (param_1 == 6) {
        uVar6 = FUN_2c66c4ec(_LAB_2c4877f4);
        FUN_2c674668(*_LAB_2c4877d8 + uVar10,_LAB_2c4877f4,uVar6);
        iVar8 = FUN_2c66c4ec(_LAB_2c4877f4);
        *puVar5 = iVar8 + uVar10;
      }
      else if (param_1 == 9) {
        uVar6 = FUN_2c66c4ec(_LAB_2c4877f8);
        FUN_2c674668(*_LAB_2c4877d8 + uVar10,_LAB_2c4877f8,uVar6);
        iVar8 = FUN_2c66c4ec(_LAB_2c4877f8);
        *puVar5 = iVar8 + uVar10;
      }
      else if (param_1 == 0xc) {
        uVar6 = FUN_2c66c4ec(_LAB_2c4877fc);
        FUN_2c674668(*_LAB_2c4877d8 + uVar10,_LAB_2c4877fc,uVar6);
        iVar8 = FUN_2c66c4ec(_LAB_2c4877fc);
        *puVar5 = iVar8 + uVar10;
      }
      else {
        uVar7 = param_1 - 4U & 0xff;
        if (uVar7 < 10) {
          if ((int)((0x249U >> uVar7) << 0x1f) < 0) {
            iVar8 = *_LAB_2c4877d8;
            FUN_2c674668(iVar8 + uVar10,param_2,param_3);
            *puVar5 = uVar11;
            if (param_1 != 0xd) {
              *(undefined1 *)(iVar8 + uVar11) = 10;
            }
          }
        }
        else if (param_1 == 0xf) {
          iVar8 = *_LAB_2c4877e8;
          *_LAB_2c4877d4 = '\x01';
          *piVar4 = iVar8 + 1;
          FUN_2c48736c();
          FUN_2c4874b0();
        }
      }
      uVar6 = *puVar2;
      FUN_2c643b2c();
      uVar10 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar10 = getCurrentExceptionNumber();
        uVar10 = uVar10 & 0x1ff;
      }
      if (uVar10 == 0) {
        iVar8 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar8 = isIRQinterruptsEnabled();
        }
        if (iVar8 == 0) {
          iVar8 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            iVar8 = getBasePriority();
          }
          if (iVar8 == 0) {
            software_interrupt(0);
            return uVar6;
          }
        }
      }
      FUN_2c643b08(uVar6,0xfffffffa);
      return 0xfffffffa;
    }
  }
  return uVar6;
}

