/* FUN_2c4bf4e6 @ 0x2c4bf4e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bf4e6(int param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  bool in_ZR;
  bool in_CY;
  
  iVar9 = _LAB_2c4bf630;
  iVar4 = _LAB_2c4bf608;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bf624,param_1);
  }
  puVar11 = _LAB_2c4bf628;
  if (in_ZR == false) {
    puVar11 = _LAB_2c4bf62c;
  }
  if (param_3 - 1 < 2) {
    uVar7 = (uint)*(byte *)(_LAB_2c4bf630 + param_1);
    if ((uVar7 != 0) && (uVar7 != param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4bf61c,param_2,uVar7,param_3);
    }
    iVar10 = param_1 * 2;
    iVar8 = _LAB_2c4bf608 + param_1 * 2;
    cVar1 = *(char *)(iVar8 + param_2);
    if (cVar1 == '\0') {
      if ((*(char *)(_LAB_2c4bf608 + param_1 * 2) == '\0') && (*(char *)(iVar8 + 1) == '\0')) {
        if (param_1 == 0) {
          func_0x2c673db8();
        }
        else {
          func_0x2c674628();
        }
        uVar3 = *(undefined1 *)(_LAB_2c4bf634 + param_1 * 2);
        iVar8 = _LAB_2c4bf634 + iVar10;
        FUN_2c673e48(uVar3);
        uVar2 = *(undefined1 *)(iVar8 + 1);
        FUN_2c673e48(uVar2);
        FUN_2c674438(uVar3);
        FUN_2c674438(uVar2);
        *puVar11 = *puVar11 | 1;
        puVar5 = puVar11 + 10;
        do {
          *puVar5 = 0;
          puVar6 = puVar5 + 0x10;
          puVar5[1] = 0;
          puVar5[10] = 1;
          puVar5[0xb] = 1;
          puVar5 = puVar6;
        } while (puVar11 + 0x4a != puVar6);
        if (param_3 == 1) {
          *puVar11 = *puVar11 & 0xfffffffd;
          func_0x2c674248(param_1);
        }
        else {
          *puVar11 = *puVar11 | 2;
          func_0x2c674168(param_1);
        }
        *(char *)(iVar9 + param_1) = (char)param_3;
      }
      iVar9 = _LAB_2c4bf60c + iVar10;
      *(undefined1 *)(iVar4 + iVar10 + param_2) = 1;
      *(undefined1 *)(iVar9 + param_2) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xbd,_LAB_2c4bf618,_LAB_2c4bf614,_LAB_2c4bf610,param_2,cVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bf620);
}

