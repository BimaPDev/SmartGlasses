/* FUN_100d7540 @ 0x100d7540 */

void FUN_100d7540(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar7;
  undefined4 *puVar6;
  
  piVar1 = DAT_100d7590;
  iVar7 = 0;
  if (3 < param_2) {
    param_2 = 4;
  }
  uVar2 = 0;
  do {
    if (*(char *)(*piVar1 + iVar7 * 0x28 + 0xd3) != '\0') {
      puVar4 = (undefined4 *)(*piVar1 + iVar7 * 0x28 + 0xac);
      puVar3 = param_1;
      puVar5 = puVar4;
      do {
        puVar6 = puVar5 + 1;
        *puVar3 = *puVar5;
        puVar3 = puVar3 + 1;
        puVar5 = puVar6;
      } while (puVar6 != puVar4 + 10);
      uVar2 = uVar2 + 1 & 0xff;
      param_1 = param_1 + 10;
      if (param_2 == uVar2) {
        return;
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 4) {
      return;
    }
  } while( true );
}

