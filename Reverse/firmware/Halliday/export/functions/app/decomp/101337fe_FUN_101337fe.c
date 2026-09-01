/* FUN_101337fe @ 0x101337fe */

ushort * FUN_101337fe(int param_1,int param_2,uint param_3)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (iVar2 == param_2) {
      return (ushort *)0x0;
    }
    puVar1 = (ushort *)FUN_10133764(iVar2 * 0xd0 + param_1);
    if (puVar1 != (ushort *)0x0) {
      if (((*(byte *)((int)puVar1 + 0xd) == 1) || (*(byte *)((int)puVar1 + 0xd) - 7 < 2)) &&
         (*puVar1 == param_3)) {
        return puVar1;
      }
      FUN_100ca13c(puVar1);
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

