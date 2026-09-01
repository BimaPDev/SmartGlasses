/* FUN_10072638 @ 0x10072638 */

void FUN_10072638(void)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  piVar1 = DAT_100727a4;
  puVar3 = (undefined1 *)*DAT_100727a4;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 3;
    puVar3[1] = 0xc;
    puVar3[2] = 0;
    FUN_1007172c(1);
    thunk_FUN_101153fc(0x32,0);
    iVar2 = thunk_FUN_1009efa0(DAT_100727a8,*piVar1 + 6,0x20);
    if (-1 < iVar2) {
      puVar3 = (undefined1 *)*piVar1;
      *puVar3 = 0x52;
      puVar3[4] = (char)iVar2 + '\x03';
      puVar3[5] = 9;
      puVar3[2] = (char)iVar2 + '\x05';
      puVar3[1] = 0xc;
      puVar3[3] = 0;
      puVar3[iVar2 + 6] = 0;
      puVar3[iVar2 + 7] = 0;
      FUN_1007172c(1,puVar3,iVar2 + 8U & 0xffff);
      thunk_FUN_101153fc(0x14,0);
    }
    puVar3 = (undefined1 *)*piVar1;
    *puVar3 = 0x1e;
    puVar3[5] = 0x60;
    puVar3[1] = 0xc;
    puVar3[2] = 4;
    puVar3[3] = 0;
    puVar3[4] = 2;
    puVar3[6] = 0;
    FUN_1007172c(1,puVar3,7);
    thunk_FUN_101153fc(0x14,0);
    puVar3 = (undefined1 *)*piVar1;
    *puVar3 = 0x1c;
    puVar3[1] = 0xc;
    puVar3[5] = 0x80;
    puVar3[2] = 4;
    puVar3[3] = 0;
    puVar3[4] = 4;
    puVar3[6] = 0;
    FUN_1007172c(1,puVar3,7);
    thunk_FUN_101153fc(0x14,0);
    puVar3 = (undefined1 *)*piVar1;
    *puVar3 = 0x43;
    puVar3[1] = 0xc;
    puVar3[2] = 1;
    puVar3[3] = 1;
    FUN_1007172c(1,puVar3,4);
    thunk_FUN_101153fc(0x14,0);
    puVar3 = (undefined1 *)*piVar1;
    *puVar3 = 0x47;
    puVar3[1] = 0xc;
    puVar3[2] = 1;
    puVar3[3] = 1;
    FUN_1007172c(1,puVar3,4);
    thunk_FUN_101153fc(0x14,0);
    puVar3 = (undefined1 *)*piVar1;
    *puVar3 = 0x1a;
    puVar3[1] = 0xc;
    puVar3[2] = 1;
    puVar3[3] = 3;
    FUN_1007172c(1,puVar3,4);
    thunk_FUN_101153fc(0x14,0);
    puVar3 = (undefined1 *)*piVar1;
    *puVar3 = 5;
    puVar3[1] = 0xc;
    puVar3[2] = 3;
    puVar3[3] = 2;
    puVar3[4] = 0;
    puVar3[5] = 2;
    FUN_1007172c(1,puVar3,6);
    thunk_FUN_101153fc(0x14,0);
    puVar3 = (undefined1 *)*piVar1;
    *puVar3 = 3;
    puVar3[2] = 0;
    puVar3[1] = 0x18;
    FUN_1007172c(1,puVar3,3);
    thunk_FUN_101153fc(0x14,0);
    return;
  }
  return;
}

