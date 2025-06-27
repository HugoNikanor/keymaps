# Maintainer: Hugo Hörnquist <hugo@lysator.liu.se>

pkgname=planck-keymap
pkgver=1
pkgrel=3
pkgdesc='TODO'
arch=(any)
license=(TODO)
depends=('xkeyboard-config>=2.45' 'xkeyboard-config<3.0')
url=https://github.com/HugoNikanor/keymaps
source=(
	planck.x11
	dvorak-sv-a6.linux-tty
)
sha256sums=('b785309649dcc021a97250e12dba4900ed801720926dc7f39811508963ee0263'
            '54c31bf0758a87b513a59599d5a8b9f0daa630fe65613738e7a3e12a98a994db')
options=(!strip)

package() {
	install -d "$pkgdir/usr/share/xkeyboard-config-2/symbols"
	install -m644 \
		"$srcdir/planck.x11" \
		"$pkgdir/usr/share/xkeyboard-config-2/symbols/planck"

	install -d "$pkgdir/usr/share/kbd/keymaps/i386/dvorak"
	install -m644 \
		"$srcdir/dvorak-sv-a6.linux-tty" \
		"$pkgdir/usr/share/kbd/keymaps/i386/dvorak/dvorak-sv-a6.map"
}

