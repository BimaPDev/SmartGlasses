/* FUN_2c66ef00 @ 0x2c66ef00 */

void FUN_2c66ef00(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  
  piVar2 = DAT_2c66efb4;
  puVar1 = DAT_2c66efb0;
  FUN_2c6694a8(*DAT_2c66efb0);
LAB_2c66ef18:
  iVar5 = *piVar2;
  if (iVar5 == 0) {
LAB_2c66ef1e:
    FUN_2c6694ac(*puVar1);
    return;
  }
  uVar6 = *(uint *)(iVar5 + 4);
  iVar8 = *(int *)(iVar5 + 0x88);
  puVar7 = (undefined4 *)(iVar5 + (uVar6 + 1) * 4);
  do {
    uVar6 = uVar6 - 1;
    if ((int)uVar6 < 0) goto LAB_2c66ef1e;
    if ((param_2 == 0) || ((iVar8 != 0 && (*(int *)(iVar8 + 0x80 + uVar6 * 4) == param_2)))) {
      pcVar3 = (code *)*puVar7;
      if (*(int *)(iVar5 + 4) - 1U == uVar6) {
        *(uint *)(iVar5 + 4) = uVar6;
      }
      else {
        *puVar7 = 0;
      }
      if (pcVar3 != (code *)0x0) {
        iVar4 = *(int *)(iVar5 + 4);
        if ((iVar8 == 0) || (uVar9 = 1 << (uVar6 & 0xff), (uVar9 & *(uint *)(iVar8 + 0x100)) == 0))
        {
          (*pcVar3)();
        }
        else if ((uVar9 & *(uint *)(iVar8 + 0x104)) == 0) {
          (*pcVar3)(param_1);
        }
        else {
          (*pcVar3)(*(undefined4 *)(iVar8 + uVar6 * 4));
        }
        if ((*(int *)(iVar5 + 4) != iVar4) || (iVar5 != *piVar2)) goto LAB_2c66ef18;
      }
    }
    puVar7 = puVar7 + -1;
  } while( true );
}

