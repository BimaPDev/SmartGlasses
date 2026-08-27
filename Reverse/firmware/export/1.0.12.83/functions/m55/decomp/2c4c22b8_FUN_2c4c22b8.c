/* FUN_2c4c22b8 @ 0x2c4c22b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c22b8(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int iVar11;
  undefined4 unaff_lr;
  bool bVar12;
  
  puVar2 = _LAB_2c4c2418;
  iVar11 = 0;
  bVar12 = (bool)isCurrentModePrivileged();
  if (bVar12) {
    iVar11 = getBasePriority();
  }
  if (iVar11 != 0x40) {
    *_LAB_2c4c2418 = 0x2c4c22cc;
    puVar2[1] = unaff_lr;
  }
  uVar5 = _LAB_2c4c2438;
  uVar4 = _LAB_2c4c242c;
  uVar8 = _LAB_2c4c2428;
  iVar3 = _LAB_2c4c241c;
  bVar12 = (bool)isCurrentModePrivileged();
  if (bVar12) {
    setBasePriority(0x40);
  }
  if (*(int *)(_LAB_2c4c241c + 0x130) == 0) {
    iVar11 = *_LAB_2c4c2434;
    *_LAB_2c4c2434 = iVar11 + 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4b,uVar4,uVar8,uVar5,iVar11 + 1);
  }
  uVar6 = FUN_2c674458();
  uVar5 = _LAB_2c4c242c;
  uVar4 = _LAB_2c4c2428;
  uVar8 = _LAB_2c4c2424;
  puVar9 = *(undefined1 **)(iVar3 + 0x130);
  uVar7 = *(uint *)(puVar9 + 8);
  if (uVar6 + 1 < uVar7) {
    iVar11 = *_LAB_2c4c2420;
    *_LAB_2c4c2420 = iVar11 + 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x55,uVar5,uVar4,uVar8,iVar11 + 1);
  }
  bVar12 = uVar7 < uVar6;
  if (bVar12) {
    uVar6 = uVar6 - uVar7;
  }
  *puVar9 = 3;
  if (!bVar12) {
    uVar6 = 0;
  }
  puVar1 = *(undefined1 **)(*(int *)(iVar3 + 0x130) + 4);
  while (puVar1 != (undefined1 *)0x0) {
    if (uVar6 < *(uint *)(puVar1 + 8)) {
      *(undefined4 *)(puVar9 + 4) = 0;
      uVar8 = *(undefined4 *)(iVar3 + 0x130);
      *(undefined1 **)(iVar3 + 0x130) = puVar1;
      *(undefined4 *)(iVar3 + 0x134) = uVar8;
      *(uint *)(puVar1 + 8) = *(int *)(puVar1 + 8) - uVar6;
      FUN_2c6742c8();
      goto LAB_2c4c2338;
    }
    uVar6 = uVar6 - *(uint *)(puVar1 + 8);
    *puVar1 = 3;
    puVar9 = puVar1;
    puVar1 = *(undefined1 **)(puVar1 + 4);
  }
  *(undefined4 *)(puVar9 + 4) = 0;
  uVar8 = *(undefined4 *)(iVar3 + 0x130);
  *(undefined4 *)(iVar3 + 0x130) = 0;
  *(undefined4 *)(iVar3 + 0x134) = uVar8;
  FUN_2c6739f8();
LAB_2c4c2338:
  puVar2 = _LAB_2c4c2418;
  pcVar10 = *(char **)(iVar3 + 0x134);
  do {
    while( true ) {
      if (pcVar10 == (char *)0x0) {
        if (iVar11 == 0) {
          *_LAB_2c4c2418 = 0xffffffff;
        }
        bVar12 = (bool)isCurrentModePrivileged();
        if (bVar12) {
          setBasePriority(iVar11);
        }
        return;
      }
      *(undefined4 *)(iVar3 + 0x134) = *(undefined4 *)(pcVar10 + 4);
      *pcVar10 = '\x04';
      pcVar10[4] = '\0';
      pcVar10[5] = '\0';
      pcVar10[6] = '\0';
      pcVar10[7] = '\0';
      if (*(int *)(pcVar10 + 0xc) != 0) break;
LAB_2c4c2394:
      *pcVar10 = '\x01';
      pcVar10 = *(char **)(iVar3 + 0x134);
    }
    if (iVar11 == 0) {
      *puVar2 = 0xffffffff;
    }
    bVar12 = (bool)isCurrentModePrivileged();
    if (bVar12) {
      setBasePriority(iVar11);
    }
    (**(code **)(pcVar10 + 0xc))(*(undefined4 *)(pcVar10 + 0x10));
    iVar11 = 0;
    bVar12 = (bool)isCurrentModePrivileged();
    if (bVar12) {
      iVar11 = getBasePriority();
    }
    if (iVar11 != 0x40) {
      *puVar2 = 0x2c4c236c;
      puVar2[1] = unaff_lr;
    }
    bVar12 = (bool)isCurrentModePrivileged();
    if (bVar12) {
      setBasePriority(0x40);
    }
    if (*pcVar10 == '\x04') goto LAB_2c4c2394;
    pcVar10 = *(char **)(iVar3 + 0x134);
  } while( true );
}

