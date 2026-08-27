/* FUN_2c5f2b52 @ 0x2c5f2b52 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5f2b52(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  
  uVar5 = (uint)*(byte *)(param_1 + 1);
  if (uVar5 < 0x41) {
    if (uVar5 != 0x2f) {
      return 0;
    }
    uVar5 = (uint)*(byte *)(param_1 + 2);
    pbVar2 = (byte *)(param_1 + 2);
    if (uVar5 < 0x41) {
      return 0;
    }
joined_r0x2c5f2b68:
    if ((0x5a < uVar5) && (0x19 < uVar5 - 0x61)) {
      return 0;
    }
LAB_2c5f2b70:
    pbVar2 = pbVar2 + 1;
    uVar5 = (uint)*pbVar2;
    if (0x2f < uVar5) {
      if (0x40 < uVar5) goto joined_r0x2c5f2b68;
      if (0x39 < uVar5) goto joined_r0x2c5f2d92;
      goto LAB_2c5f2b70;
    }
    if (0x1f < uVar5) {
      if (uVar5 == 0x20) goto LAB_2c5f2be4;
      if (uVar5 != 0x2d) {
        return 0;
      }
      goto LAB_2c5f2b70;
    }
    if (4 < uVar5 - 9) {
      return 0;
    }
LAB_2c5f2be4:
    do {
      while( true ) {
        pbVar2 = pbVar2 + 1;
        uVar5 = (uint)*pbVar2;
        if (0x1f < uVar5) break;
        if (4 < uVar5 - 9) {
          return 0;
        }
      }
    } while (uVar5 == 0x20);
joined_r0x2c5f2d92:
    if (uVar5 != 0x3e) {
      return 0;
    }
LAB_2c5f2c9a:
    bVar1 = false;
    while( true ) {
      do {
        pbVar2 = pbVar2 + 1;
        uVar5 = (uint)*pbVar2;
      } while ((int)((uint)*(byte *)(_LAB_2c5f2e1c + uVar5) << 0x1d) < 0);
      if (uVar5 < 9) break;
      if (10 < uVar5) {
        if ((uVar5 != 0xb) && (uVar5 < 0xe)) {
          return 7;
        }
        break;
      }
      bVar1 = true;
      while( true ) {
        pbVar2 = pbVar2 + 1;
        if ((int)((uint)*(byte *)(_LAB_2c5f2e1c + (uint)*pbVar2) << 0x1d) < 0) break;
        if (1 < *pbVar2 - 9) {
          return 7;
        }
      }
    }
    if (!bVar1) {
      return 0;
    }
    return 7;
  }
  if ((0x5a < uVar5) && (0x19 < uVar5 - 0x61)) {
    return 0;
  }
  uVar5 = (uint)*(byte *)(param_1 + 2);
  pbVar2 = (byte *)(param_1 + 2);
  bVar4 = *(byte *)(_LAB_2c5f2e1c + uVar5);
  while (-1 < (int)((uint)bVar4 << 0x1e)) {
    if (uVar5 < 0x3e) {
      if (uVar5 < 0x2f) {
        if (uVar5 != 0x2d) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0x2f) goto LAB_2c5f2d9c;
        if (0x39 < uVar5) {
          return 0;
        }
      }
    }
    else if (uVar5 < 0x5b) {
      if (uVar5 == 0x3e) goto LAB_2c5f2c9a;
      if (uVar5 < 0x41) {
        return 0;
      }
    }
    else if (0x19 < uVar5 - 0x61) {
      return 0;
    }
    pbVar2 = pbVar2 + 1;
    uVar5 = (uint)*pbVar2;
    bVar4 = *(byte *)(_LAB_2c5f2e1c + uVar5);
  }
LAB_2c5f2c36:
  do {
    pbVar2 = pbVar2 + 1;
    uVar5 = (uint)*pbVar2;
  } while ((*(byte *)(_LAB_2c5f2e1c + uVar5) & 2) != 0);
  if (uVar5 < 0x3f) {
    if (uVar5 < 0x3a) {
      if (uVar5 != 0x2f) {
        return 0;
      }
LAB_2c5f2d9c:
      if (pbVar2[1] != 0x3e) {
        return 0;
      }
      pbVar2 = pbVar2 + 1;
      goto LAB_2c5f2c9a;
    }
    if (uVar5 != 0x3a) goto joined_r0x2c5f2d92;
  }
  else if (uVar5 < 0x5f) {
    if (0x19 < uVar5 - 0x41) {
      return 0;
    }
  }
  else {
    if (0x7a < uVar5) {
      return 0;
    }
    if (uVar5 == 0x60) {
      return 0;
    }
  }
LAB_2c5f2c54:
  do {
    pbVar2 = pbVar2 + 1;
    uVar5 = (uint)*pbVar2;
  } while ((*(byte *)(_LAB_2c5f2e1c + uVar5) & 8) != 0);
  if (uVar5 < 0x2d) {
    if (uVar5 < 0xe) {
      if (uVar5 < 9) {
        return 0;
      }
    }
    else if (uVar5 != 0x20) {
      return 0;
    }
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar4 = *pbVar2;
      if (0x3c < bVar4) break;
      if (0x20 < bVar4) {
        if (bVar4 < 0x30) {
          if (bVar4 != 0x2f) {
            return 0;
          }
          goto LAB_2c5f2d9c;
        }
        if (bVar4 != 0x3a) {
          return 0;
        }
        goto LAB_2c5f2c54;
      }
      if (bVar4 < 9) {
        return 0;
      }
      if ((bVar4 != 0x20) && (0xd < bVar4)) {
        return 0;
      }
    }
    if (bVar4 < 0x5b) {
      if (bVar4 == 0x3d) goto LAB_2c5f2d0c;
      if (bVar4 == 0x3e) goto LAB_2c5f2c9a;
      if (bVar4 < 0x41) {
        return 0;
      }
    }
    else if (bVar4 < 0x60) {
      if (bVar4 != 0x5f) {
        return 0;
      }
    }
    else {
      if (bVar4 == 0x60) {
        return 0;
      }
      if (0x7a < bVar4) {
        return 0;
      }
    }
    goto LAB_2c5f2c54;
  }
  if (uVar5 < 0x3d) {
    if (0x2f < uVar5) {
      return 0;
    }
    goto LAB_2c5f2d9c;
  }
  if (uVar5 != 0x3d) goto joined_r0x2c5f2d92;
LAB_2c5f2d0c:
  do {
    pbVar2 = pbVar2 + 1;
    uVar5 = (uint)*pbVar2;
    if ((*(byte *)(_LAB_2c5f2e1c + uVar5) & 0x20) != 0) goto LAB_2c5f2c1a;
    if (0xe0 < uVar5) goto LAB_2c5f2bf6;
    if (0x22 < uVar5) {
      if (uVar5 < 0x28) goto LAB_2c5f2e46;
      goto LAB_2c5f2e28;
    }
    if (uVar5 == 0) {
      return 0;
    }
  } while (uVar5 < 0x21);
LAB_2c5f2d1c:
  do {
    pbVar3 = pbVar2;
    uVar5 = (uint)pbVar3[1];
    pbVar6 = pbVar3 + 1;
    pbVar2 = pbVar6;
  } while ((*(byte *)(_LAB_2c5f2e1c + uVar5) & 0x40) != 0);
  if (uVar5 < 0xed) {
    if (uVar5 < 0xc2) goto LAB_2c5f2f4c;
    if (0xdf < uVar5) {
      if (uVar5 != 0xe0) goto LAB_2c5f2d40;
      pbVar6 = pbVar3 + 2;
      if (0x1f < (byte)(pbVar3[2] + 0x60)) {
        return 0;
      }
    }
  }
  else {
    if (uVar5 < 0xf1) {
      if (uVar5 == 0xed) {
        pbVar6 = pbVar3 + 2;
        if (0x1f < (pbVar3[2] ^ 0x80)) {
          return 0;
        }
        goto LAB_2c5f2d52;
      }
      if ((uVar5 == 0xf0) && (pbVar6 = pbVar3 + 2, 0x2f < (byte)(pbVar3[2] + 0x70))) {
        return 0;
      }
    }
    else if (uVar5 < 0xf4) {
      pbVar6 = pbVar3 + 2;
      if (0x3f < (pbVar3[2] ^ 0x80)) {
        return 0;
      }
    }
    else {
      if (uVar5 != 0xf4) {
        return 0;
      }
      pbVar6 = pbVar3 + 2;
      if (0xf < (pbVar3[2] ^ 0x80)) {
        return 0;
      }
    }
LAB_2c5f2d40:
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    if (0x3f < (*pbVar2 ^ 0x80)) {
      return 0;
    }
  }
LAB_2c5f2d52:
  pbVar2 = pbVar6 + 1;
  if (0x3f < (pbVar6[1] ^ 0x80)) {
    return 0;
  }
  goto LAB_2c5f2d1c;
LAB_2c5f2e28:
  if (uVar5 < 0xc2) {
    return 0;
  }
  if (uVar5 == 0xe0) {
    bVar4 = pbVar2[1] + 0x60;
    goto joined_r0x2c5f2e3e;
  }
  while( true ) {
    pbVar6 = pbVar2 + 1;
    pbVar2 = pbVar2 + 1;
    if (0x3f < (*pbVar6 ^ 0x80)) {
      return 0;
    }
LAB_2c5f2c1a:
    do {
      pbVar2 = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
    } while ((*(byte *)(_LAB_2c5f2e1c + uVar5) & 0x20) != 0);
    if (uVar5 < 0xe1) break;
LAB_2c5f2bf6:
    if (uVar5 < 0xf0) {
      if (uVar5 != 0xed) goto LAB_2c5f2c02;
      bVar4 = pbVar2[1] ^ 0x80;
joined_r0x2c5f2e3e:
      pbVar2 = pbVar2 + 1;
      if (0x1f < bVar4) {
        return 0;
      }
    }
    else {
      if (uVar5 == 0xf0) {
        pbVar6 = pbVar2 + 1;
        pbVar2 = pbVar2 + 1;
        if (0x2f < (byte)(*pbVar6 + 0x70)) {
          return 0;
        }
      }
      else if (uVar5 < 0xf4) {
        pbVar6 = pbVar2 + 1;
        pbVar2 = pbVar2 + 1;
        if (0x3f < (*pbVar6 ^ 0x80)) {
          return 0;
        }
      }
      else {
        if (uVar5 != 0xf4) {
          return 0;
        }
        pbVar6 = pbVar2 + 1;
        pbVar2 = pbVar2 + 1;
        if (0xf < (*pbVar6 ^ 0x80)) {
          return 0;
        }
      }
LAB_2c5f2c02:
      pbVar6 = pbVar2 + 1;
      pbVar2 = pbVar2 + 1;
      if (0x3f < (*pbVar6 ^ 0x80)) {
        return 0;
      }
    }
  }
  if (uVar5 < 0x3e) goto code_r0x2c5f2c30;
  if (uVar5 == 0x3e) goto LAB_2c5f2c9a;
  goto LAB_2c5f2e28;
code_r0x2c5f2c30:
  if (0x1f < uVar5 - 1) {
    return 0;
  }
  goto LAB_2c5f2c36;
LAB_2c5f2e46:
  do {
    pbVar3 = pbVar2;
    pbVar6 = pbVar3 + 1;
    uVar5 = (uint)*pbVar6;
    pbVar2 = pbVar6;
  } while (*(char *)(_LAB_2c5f2e1c + uVar5) < '\0');
  if (uVar5 < 0xed) {
    if (uVar5 < 0xc2) goto LAB_2c5f2f88;
    if (0xdf < uVar5) {
      if (uVar5 != 0xe0) goto LAB_2c5f2e66;
      pbVar6 = pbVar3 + 2;
      if (0x1f < (byte)(pbVar3[2] + 0x60)) {
        return 0;
      }
    }
  }
  else {
    if (uVar5 < 0xf1) {
      if (uVar5 == 0xed) {
        pbVar6 = pbVar3 + 2;
        if (0x1f < (pbVar3[2] ^ 0x80)) {
          return 0;
        }
        goto LAB_2c5f2e7a;
      }
      if ((uVar5 == 0xf0) && (pbVar6 = pbVar3 + 2, 0x2f < (byte)(pbVar3[2] + 0x70))) {
        return 0;
      }
    }
    else if (uVar5 < 0xf4) {
      pbVar6 = pbVar3 + 2;
      if (0x3f < (pbVar3[2] ^ 0x80)) {
        return 0;
      }
    }
    else {
      if (uVar5 != 0xf4) {
        return 0;
      }
      pbVar6 = pbVar3 + 2;
      if (0xf < (pbVar3[2] ^ 0x80)) {
        return 0;
      }
    }
LAB_2c5f2e66:
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    if (0x3f < (*pbVar2 ^ 0x80)) {
      return 0;
    }
  }
LAB_2c5f2e7a:
  pbVar2 = pbVar6 + 1;
  if (0x3f < (pbVar6[1] ^ 0x80)) {
    return 0;
  }
  goto LAB_2c5f2e46;
LAB_2c5f2f88:
  if (0x26 < uVar5 - 1) {
    return 0;
  }
  goto LAB_2c5f2f54;
LAB_2c5f2f4c:
  if (0x21 < uVar5 - 1) {
    return 0;
  }
LAB_2c5f2f54:
  uVar5 = (uint)pbVar6[1];
  pbVar2 = pbVar6 + 1;
  if ((*(byte *)(_LAB_2c5f2e1c + uVar5) & 2) == 0) {
    if (uVar5 != 0x2f) goto joined_r0x2c5f2d92;
    goto LAB_2c5f2d9c;
  }
  goto LAB_2c5f2c36;
}

