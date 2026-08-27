/* FUN_2c472a74 @ 0x2c472a74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c472a74(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint in_fpscr;
  undefined8 uVar14;
  
  puVar3 = _LAB_2c472d68;
  piVar2 = _LAB_2c472d60;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1b1,_LAB_2c472da8,_LAB_2c472da4,_LAB_2c472db0,_LAB_2c472d9c);
  }
  if (*_LAB_2c472d60 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1b6,_LAB_2c472da8,_LAB_2c472da4,_LAB_2c472da0,_LAB_2c472d9c);
  }
  FUN_2c644044(*_LAB_2c472d64,0xffffffff);
  iVar6 = *piVar2;
  *(undefined2 *)(puVar3 + 6) = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  uVar7 = FUN_2c4732c0(iVar6);
  FUN_2c473180(uVar7,_LAB_2c472d6c,puVar3);
  uVar11 = puVar3[2];
  *(char *)(puVar3 + 6) = 'd' - (char)((uVar11 * 100) / *puVar3);
  uVar7 = _LAB_2c472d70;
  cVar10 = '\0';
  if (uVar11 != 0) {
    cVar10 = 'd' - (char)((puVar3[3] * 100) / uVar11);
  }
  uVar14 = VectorUnsignedToFloat(*puVar3,(byte)(in_fpscr >> 0x16) & 3);
  *(char *)((int)puVar3 + 0x19) = cVar10;
  FUN_2c48e518((int)uVar14,param_1,uVar7);
  puVar13 = _LAB_2c472d68;
  uVar14 = VectorUnsignedToFloat(puVar3[2],(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar14,param_1,_LAB_2c472d74);
  uVar7 = _LAB_2c472db4;
  uVar14 = VectorUnsignedToFloat(puVar3[3],(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar14,param_1,_LAB_2c472d78);
  uVar5 = _LAB_2c472db8;
  uVar14 = VectorUnsignedToFloat(puVar3[5],(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar14,param_1,_LAB_2c472d7c);
  uVar14 = VectorUnsignedToFloat((uint)(byte)puVar3[6],(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar14,param_1,_LAB_2c472d80);
  iVar6 = 1;
  uVar14 = VectorUnsignedToFloat((uint)*(byte *)((int)puVar3 + 0x19),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar14,param_1,_LAB_2c472d84);
  uVar8 = FUN_2c48e714();
  do {
    if (iVar6 - 1U < 5) {
      uVar9 = FUN_2c48e738();
      FUN_2c48e5b4(uVar9,uVar7,*(undefined4 *)(_LAB_2c472d88 + iVar6 * 4 + -4));
      uVar14 = VectorUnsignedToFloat(puVar13[7],(byte)(in_fpscr >> 0x16) & 3);
      FUN_2c48e518((int)uVar14,uVar9,uVar5);
      uVar14 = VectorUnsignedToFloat(puVar13[9],(byte)(in_fpscr >> 0x16) & 3);
      FUN_2c48e518((int)uVar14,uVar9,_LAB_2c472d7c);
      FUN_2c48e444(uVar8,uVar9);
    }
    else if (iVar6 == 0xd) {
      FUN_2c48e474(param_1,_LAB_2c472d8c,uVar8);
      FUN_2c644080(*_LAB_2c472d64);
      puVar3 = _LAB_2c472d98;
      puVar4 = _LAB_2c472d94;
      piVar2 = _LAB_2c472d90;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x23e,_LAB_2c472da8,_LAB_2c472da4,_LAB_2c472db0,_LAB_2c472dac);
      }
      if (*_LAB_2c472d90 != 0) {
        FUN_2c644044(*_LAB_2c472d94,0xffffffff);
        iVar6 = *piVar2;
        *(undefined2 *)(puVar3 + 6) = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        uVar7 = FUN_2c4732c0(iVar6);
        FUN_2c473180(uVar7,_LAB_2c472d6c,puVar3);
        uVar11 = puVar3[2];
        *(char *)(puVar3 + 6) = 'd' - (char)((uVar11 * 100) / *puVar3);
        uVar7 = _LAB_2c472d70;
        cVar10 = '\0';
        if (uVar11 != 0) {
          cVar10 = 'd' - (char)((puVar3[3] * 100) / uVar11);
        }
        uVar14 = VectorUnsignedToFloat(*puVar3,(byte)(in_fpscr >> 0x16) & 3);
        *(char *)((int)puVar3 + 0x19) = cVar10;
        FUN_2c48e518((int)uVar14,param_2,uVar7);
        puVar13 = _LAB_2c472d98;
        uVar14 = VectorUnsignedToFloat(puVar3[2],(byte)(in_fpscr >> 0x16) & 3);
        FUN_2c48e518((int)uVar14,param_2,_LAB_2c472d74);
        iVar6 = _LAB_2c472d88;
        uVar14 = VectorUnsignedToFloat(puVar3[3],(byte)(in_fpscr >> 0x16) & 3);
        FUN_2c48e518((int)uVar14,param_2,_LAB_2c472d78);
        uVar7 = _LAB_2c472db4;
        uVar14 = VectorUnsignedToFloat(puVar3[5],(byte)(in_fpscr >> 0x16) & 3);
        FUN_2c48e518((int)uVar14,param_2,_LAB_2c472d7c);
        uVar5 = _LAB_2c472db8;
        uVar14 = VectorUnsignedToFloat((uint)(byte)puVar3[6],(byte)(in_fpscr >> 0x16) & 3);
        FUN_2c48e518((int)uVar14,param_2,_LAB_2c472d80);
        iVar12 = 1;
        uVar14 = VectorUnsignedToFloat
                           ((uint)*(byte *)((int)puVar3 + 0x19),(byte)(in_fpscr >> 0x16) & 3);
        FUN_2c48e518((int)uVar14,param_2,_LAB_2c472d84);
        uVar8 = FUN_2c48e714();
        do {
          if (iVar12 - 3U < 3) {
            uVar9 = FUN_2c48e738();
            FUN_2c48e5b4(uVar9,uVar7,*(undefined4 *)(iVar6 + iVar12 * 4 + -4));
            uVar14 = VectorUnsignedToFloat(puVar13[7],(byte)(in_fpscr >> 0x16) & 3);
            FUN_2c48e518((int)uVar14,uVar9,uVar5);
            uVar14 = VectorUnsignedToFloat(puVar13[9],(byte)(in_fpscr >> 0x16) & 3);
            FUN_2c48e518((int)uVar14,uVar9,_LAB_2c472d7c);
            FUN_2c48e444(uVar8,uVar9);
          }
          else if (iVar12 == 0xd) {
            FUN_2c48e474(param_2,_LAB_2c472d8c,uVar8);
            uVar7 = *puVar4;
            FUN_2c643b2c();
            uVar11 = 0;
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              uVar11 = getCurrentExceptionNumber();
              uVar11 = uVar11 & 0x1ff;
            }
            if (uVar11 == 0) {
              iVar6 = 0;
              bVar1 = (bool)isCurrentModePrivileged();
              if (bVar1) {
                iVar6 = isIRQinterruptsEnabled();
              }
              if (iVar6 == 0) {
                iVar6 = 0;
                bVar1 = (bool)isCurrentModePrivileged();
                if (bVar1) {
                  iVar6 = getBasePriority();
                }
                if (iVar6 == 0) {
                  software_interrupt(0);
                  return uVar7;
                }
              }
            }
            FUN_2c643b08(uVar7,0xfffffffa);
            return 0xfffffffa;
          }
          iVar12 = iVar12 + 1;
          puVar13 = puVar13 + 3;
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x243,_LAB_2c472da8,_LAB_2c472da4,_LAB_2c472da0,_LAB_2c472dac);
    }
    iVar6 = iVar6 + 1;
    puVar13 = puVar13 + 3;
  } while( true );
}

