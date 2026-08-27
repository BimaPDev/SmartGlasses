/* FUN_1407717c @ 0x1407717c */

int * FUN_1407717c(uint param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  char cVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  int aiStack_90 [25];
  int local_2c;
  
  local_2c = *DAT_14077304;
  FUN_140e5658(aiStack_90,0,100,0);
  iVar1 = DAT_14077310;
  if (param_1 == 1) {
    uVar10 = (uint)*(ushort *)(DAT_14077310 + 0x264);
    uVar15 = (uint)*(ushort *)(DAT_14077310 + 0x266);
    cVar9 = *(char *)(DAT_14077310 + 0x28c);
    piVar8 = (int *)(DAT_14077310 + 0x254);
  }
  else {
    if (param_1 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1407730c,DAT_14077308,2);
    }
    cVar9 = *(char *)(DAT_14077310 + 0x28c);
    if (cVar9 == '\0') {
      uVar10 = (uint)*(ushort *)(DAT_14077310 + 0x288);
      uVar15 = (uint)*(ushort *)(DAT_14077310 + 0x28a);
      piVar8 = (int *)(DAT_14077310 + 0x278);
    }
    else {
      uVar10 = (uint)*(ushort *)(DAT_14077310 + 0x264);
      uVar15 = (uint)*(ushort *)(DAT_14077310 + 0x266);
      piVar8 = (int *)(DAT_14077310 + 0x278);
    }
  }
  FUN_140e5148(*(undefined4 *)(DAT_14077310 + 4),0xffffffff);
  uVar7 = 0;
  pbVar3 = DAT_14077314 + 500;
  pbVar6 = DAT_14077314;
  do {
    while (uVar4 = (uint)*pbVar6, -1 < (int)(uVar4 << 0x1f)) {
LAB_14077212:
      pbVar6 = pbVar6 + 0x14;
      if (pbVar3 == pbVar6) goto LAB_14077246;
    }
    if (cVar9 != '\0') {
      if ((uVar4 & 10) == 2) {
        pbVar6[1] = pbVar6[1] & 0xef;
        aiStack_90[uVar7] = (int)pbVar6;
        uVar7 = uVar7 + 1;
      }
      goto LAB_14077212;
    }
    if ((uVar4 & 0xf) >> 1 != param_1) goto LAB_14077212;
    pbVar6[1] = pbVar6[1] & 0xef;
    aiStack_90[uVar7] = (int)pbVar6;
    pbVar6 = pbVar6 + 0x14;
    uVar7 = uVar7 + 1;
  } while (pbVar3 != pbVar6);
LAB_14077246:
  piVar11 = piVar8;
  if (((uVar7 != 0) && (uVar7 != 1)) && ((int)uVar10 < (int)uVar7)) {
    piVar12 = (int *)*piVar8;
    if (piVar8 != piVar12) {
      iVar16 = 0x3ea;
      piVar14 = (int *)*piVar12;
      do {
        piVar13 = piVar12;
        iVar2 = FUN_14075258(piVar13);
        uVar10 = 0;
        piVar12 = aiStack_90;
        do {
          iVar5 = *piVar12;
          if (*(ushort *)(iVar5 + 8) == (*(ushort *)(iVar2 + 1) & 0xfff)) {
            if (-1 < (int)((uint)*(byte *)(iVar5 + 1) << 0x1b)) {
              if ((*(byte *)(iVar5 + 0xd) == 0) ||
                 ((uint)*(byte *)(iVar5 + 0xd) < (uVar15 + 1) / uVar7)) goto LAB_140772ba;
              *(byte *)(iVar5 + 1) = *(byte *)(iVar5 + 1) | 0x10;
            }
            break;
          }
          uVar10 = uVar10 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar7 != uVar10);
        iVar16 = iVar16 + -1;
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_14077318,0x3e9);
        }
        bVar17 = piVar8 != piVar14;
        piVar11 = piVar13;
        piVar12 = piVar14;
        piVar14 = (int *)*piVar14;
      } while (bVar17);
      if (piVar13 != (int *)0x0) goto LAB_140772ba;
    }
    piVar11 = (int *)0x0;
  }
LAB_140772ba:
  FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
  if (*DAT_14077304 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return piVar11;
}

