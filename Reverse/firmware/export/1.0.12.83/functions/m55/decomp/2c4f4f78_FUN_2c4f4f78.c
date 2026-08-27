/* FUN_2c4f4f78 @ 0x2c4f4f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f4f78(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  ushort uStack_44a;
  undefined4 uStack_448;
  undefined4 uStack_444;
  int iStack_440;
  int iStack_43c;
  int iStack_438;
  int iStack_434;
  ushort auStack_42c [2];
  undefined1 auStack_428 [1020];
  undefined4 uStack_2c;
  
  puVar2 = _LAB_2c4f5158;
  uVar10 = (uint)(param_4 - param_3) >> 5;
  uStack_2c = *_LAB_2c4f5154;
  do {
    do {
      do {
        FUN_2c644134(&iStack_438,0,0xffffffff);
        uVar3 = _LAB_2c4f517c;
      } while (iStack_438 != 8);
    } while (-1 < iStack_434 << 0x1f);
    while( true ) {
      iVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        *puVar2 = 0x2c4f4fc2;
        puVar2[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      iVar5 = FUN_2c673d58(uVar3);
      if (iVar8 == 0) {
        *puVar2 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar8);
      }
      if (iVar5 < 1) break;
      uStack_448 = 0;
      uStack_444 = 0;
      iStack_440 = 0;
      iStack_43c = 0;
      uStack_44a = 0;
      iVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        *puVar2 = 0x2c4f4ffa;
        puVar2[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      FUN_2c673da8(uVar3,2,&uStack_448,&iStack_440,&uStack_444,&iStack_43c);
      iVar5 = iStack_440;
      FUN_2c674668(&uStack_44a,uStack_448,iStack_440);
      FUN_2c674668((int)&uStack_44a + iVar5,uStack_444,iStack_43c);
      if (iVar8 == 0) {
        *puVar2 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar8);
      }
      uVar9 = (uint)uStack_44a;
      if (0x400 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4f5168,uVar9);
      }
      if (uVar9 != 0) {
        uStack_448 = 0;
        uStack_444 = 0;
        iStack_440 = 0;
        iStack_43c = 0;
        iVar8 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar8 = getBasePriority();
        }
        if (iVar8 != 0x40) {
          *puVar2 = 0x2c4f5064;
          puVar2[1] = unaff_lr;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x40);
        }
        FUN_2c674208(uVar3,0,2,0x40);
        FUN_2c673da8(uVar3,uVar9,&uStack_448,&iStack_440,&uStack_444,&iStack_43c);
        iVar4 = iStack_43c;
        iVar5 = iStack_440;
        if (uVar9 == iStack_440 + iStack_43c) {
          FUN_2c674668(auStack_42c,uStack_448,iStack_440);
          FUN_2c674668((int)auStack_42c + iVar5,uStack_444,iVar4);
          FUN_2c674208(uVar3,0,uVar9);
          FUN_2c674268(uStack_448,0,iStack_440);
          FUN_2c674268(uStack_444,0,iStack_43c);
        }
        else {
          FUN_2c674268(auStack_42c,0,uVar9);
        }
        if (iVar8 == 0) {
          *puVar2 = 0xffffffff;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(iVar8);
        }
        if (auStack_42c[0] >> 8 != 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x131,_LAB_2c4f5160,_LAB_2c4f5164,_LAB_2c4f515c);
        }
        if (uVar10 == 0) {
LAB_2c4f5142:
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(_LAB_2c4f5178,_LAB_2c4f5174);
        }
        uVar7 = 0;
        puVar6 = _LAB_2c4f514c;
        while (*puVar6 != auStack_42c[0]) {
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 0x10;
          if (uVar7 == uVar10) goto LAB_2c4f5142;
        }
        if (*(code **)(puVar6 + 6) == (code *)0x0) {
          FUN_2c6741e8(0x1291,_LAB_2c4f5170,_LAB_2c4f516c);
        }
        else {
          (**(code **)(puVar6 + 6))(auStack_428,uVar9 - 4 & 0xffff);
        }
      }
    }
  } while( true );
}

