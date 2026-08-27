/* FUN_14059088 @ 0x14059088 */

uint FUN_14059088(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  uint local_14;
  
  local_14 = *DAT_1405911c;
  uVar10 = FUN_1405c284(*(undefined2 *)(param_2 + 2),param_2,param_3,0);
  uVar2 = (uint)uVar10;
  uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar3 = uVar2;
  if (uVar2 < 2) {
    iVar7 = *(int *)(DAT_14059120 + uVar2 * 4);
    uVar6 = DAT_14059120;
    if ((iVar7 != 0) && ((int)((uint)*(byte *)(iVar7 + 0x43) << 0x1b) < 0)) {
      if (*(byte *)(param_2 + 1) == 0) {
        local_1c = *(undefined4 *)(param_2 + 4);
        _local_18 = CONCAT22(uStack_16,*(undefined2 *)(param_2 + 8));
        pcVar9 = *(code **)(*(int *)(DAT_14059120 + 0x14) + 4);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(uVar2,*(undefined4 *)(iVar7 + 0x3c),&local_1c);
        }
        FUN_14054698(uVar2,&local_1c);
        uVar3 = FUN_14065f94(uVar2,*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6));
        iVar7 = 0;
      }
      else {
        iVar7 = *(byte *)(param_2 + 1) + 0x90;
      }
      iVar1 = DAT_1405b1dc;
      iVar5 = DAT_14059124;
      uVar6 = *DAT_1405911c ^ local_14;
      uVar8 = 0;
      if (uVar6 == 0) {
        if (1 < uVar2) {
          return 0;
        }
        if (((*(int *)(DAT_1405b1dc + uVar2 * 4) != 0) && (iVar4 = FUN_1406d73c(), iVar4 != 0)) &&
           (iVar5 == *(int *)(iVar4 + 4))) {
          iVar5 = *(int *)(iVar1 + uVar2 * 4);
          if (iVar5 != 0) {
            FUN_1406d6c0(iVar5,3,iVar7);
            return 1;
          }
          return 1;
        }
        return 0;
      }
      goto LAB_14059118;
    }
  }
  uVar8 = *DAT_1405911c ^ local_14;
  iVar7 = 0;
  if (uVar8 == 0) {
    return uVar2;
  }
LAB_14059118:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar3,uVar6,uVar8,iVar7);
}

