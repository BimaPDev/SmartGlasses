/* FUN_100fec54 @ 0x100fec54 */

undefined1 * FUN_100fec54(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_1c [2];
  
  uVar5 = (uint)(*(ushort *)(param_1 + 8) >> 1);
  iVar6 = *(int *)(param_1 + 0x10);
  puVar2 = (undefined1 *)FUN_100fb280(param_2,1,0,uVar5 + 1,0,local_1c);
  if (local_1c[0] != 0) {
    return (undefined1 *)0x0;
  }
  puVar7 = puVar2;
  if (uVar5 != 0) {
    puVar7 = puVar2 + -1;
    uVar3 = 0;
    do {
      while( true ) {
        uVar1 = *(undefined1 *)(iVar6 + 1 + uVar3 * 2);
        uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar6 + uVar3 * 2),uVar1);
        if (uVar4 == 0) goto LAB_100feca8;
        uVar3 = uVar3 + 1;
        if (0x5f < uVar4 - 0x20) break;
        puVar7 = puVar7 + 1;
        *puVar7 = uVar1;
        if (uVar5 == uVar3) goto LAB_100feca8;
      }
      puVar7 = puVar7 + 1;
      *puVar7 = 0x3f;
    } while (uVar5 != uVar3);
LAB_100feca8:
    puVar7 = puVar2 + uVar3;
  }
  *puVar7 = 0;
  return puVar2;
}

