/* FUN_100b944c @ 0x100b944c */

int FUN_100b944c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte local_24;
  undefined1 local_23;
  ushort local_22;
  byte *local_20;
  uint local_1c [2];
  
  *param_1 = 0;
  do {
    while( true ) {
      iVar1 = FUN_100b940c(&local_24);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_24 == 0) {
        return iVar1;
      }
      if ((local_24 & 0x80) == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 4;
      }
      iVar1 = FUN_100b93e4(uVar2,&local_20);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = (uint)local_24;
      if ((char)local_24 < '\0') {
        iVar1 = (uVar3 & 0x1f) << 0x10;
        local_22 = CONCAT11(local_20[2],local_20[3]) + 1;
      }
      else {
        local_22 = 0;
        iVar1 = 0;
      }
      uVar4 = (uint)local_20[1] + iVar1 + 1 + (uint)*local_20 * 0x100;
      if (param_2 == 0) {
        iVar1 = FUN_100b92b8(uVar4);
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = (uint)local_24;
      }
      if ((int)(uVar3 << 0x19) < 0) break;
      if ((uVar3 & 0x60) == 0x20) {
        FUN_100b9870();
        goto LAB_100b94f2;
      }
      if (param_2 != 0) goto LAB_100b94fa;
LAB_100b94b0:
      if ((int)(uVar3 << 0x18) < 0) {
        iVar1 = FUN_100b93bc(local_22);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_100b98d0(&local_22);
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = (uint)local_22;
        iVar1 = FUN_100b96d4();
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_100b9960(local_1c);
        if (iVar1 == 0) {
          return 0;
        }
        if (uVar3 != local_1c[0]) {
          return 0;
        }
        iVar1 = FUN_100b92d4(local_1c);
        if (iVar1 == 0) {
          return 0;
        }
        if (uVar4 != local_1c[0]) {
          return 0;
        }
        *param_1 = uVar4 + *param_1;
        FUN_100b93d8();
      }
      else {
        iVar1 = FUN_100b93e4(uVar4,&local_20);
        uVar3 = param_2;
        if (iVar1 == 0) {
          return 0;
        }
        do {
          uVar5 = uVar3 + 1;
          FUN_100b9320(local_20[uVar3]);
          uVar3 = uVar5;
        } while (uVar4 != uVar5);
        *param_1 = uVar4 + *param_1;
      }
    }
    iVar1 = FUN_100b940c(&local_23);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_100b989c(local_23);
    if (iVar1 == 0) {
      return 0;
    }
LAB_100b94f2:
    uVar3 = (uint)local_24;
    if (param_2 == 0) goto LAB_100b94b0;
LAB_100b94fa:
    iVar1 = *param_1 + uVar4;
    if ((int)(uVar3 << 0x18) < 0) {
      uVar4 = (uint)local_22;
    }
    *param_1 = iVar1;
    FUN_100b93e4(uVar4,&local_20);
  } while( true );
}

